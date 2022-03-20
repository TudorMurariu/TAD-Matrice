#pragma once
#include "Matrice.h"
#include <stdlib.h>

class Vector
{
public:
	Vector();
	~Vector();
	void Adauga(TElem x);
	TElem* v;
private:
	int len;
	int capacity;
};

