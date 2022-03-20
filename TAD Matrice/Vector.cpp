#include "Vector.h"

Vector::Vector()
{
	this->len = 0;
	this->capacity = 2;
	this->v = (TElem*)malloc(sizeof(TElem) * this->capacity);
}

Vector::~Vector()
{
	free(this->v);
}

void Vector::Adauga(TElem x)
{
	if (this->len - 1 >= this->capacity)
	{
		int new_capacity = 2 * this->capacity;
		TElem* new_v = (TElem*)malloc(sizeof(TElem) * new_capacity);
		for (int i = 0; i < this->len; i++)
			new_v[i] = this->v[i];
		free(this->v);
		this->v = new_v;
		this->capacity = new_capacity;
	}

	v[this->len++] = x;
}