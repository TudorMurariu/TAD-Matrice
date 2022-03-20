#include "Vector.h"

Vector::Vector()
{
	this->len = 0;
	this->capacity = 2;
	this->v = (int*)malloc(sizeof(int) * this->capacity);
}

Vector::~Vector()
{
	free(this->v);
}

void Vector::Adauga(int x)
{
	if (this->len - 1 >= this->capacity)
	{
		int new_capacity = 2 * this->capacity;
		int* new_v = (int*)malloc(sizeof(int) * new_capacity);
		for (int i = 0; i < this->len; i++)
			new_v[i] = this->v[i];
		free(this->v);
		this->v = new_v;
		this->capacity = new_capacity;
	}

	v[this->len++] = x;
}

void Vector::Sterge(int x)
{
	int ok = 0;
	for (int i = 0; i < this->len; i++)
	{
		if (!ok && x == this->v[i])
			ok = 1;
		
		if (ok && i != this->len-1)
			this->v[i] = this->v[i + 1];
	}

	if (ok)
		this->len--;
}

int Vector::getLen() const{
	return this->len;
}

/// Pentru telement :

Vector1::Vector1()
{
	this->len = 0;
	this->capacity = 2;
	this->v = (TElem*)malloc(sizeof(TElem) * this->capacity);
}

Vector1::~Vector1()
{
	free(this->v);
}

void Vector1::Adauga(TElem x)
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

void Vector1::Sterge(TElem x)
{
	int ok = 0;
	for (int i = 0; i < this->len; i++)
	{
		if (!ok && x == this->v[i])
			ok = 1;

		if (ok && i != this->len - 1)
			this->v[i] = this->v[i + 1];
	}

	if (ok)
		this->len--;
}

int Vector1::getLen() const {
	return this->len;
}