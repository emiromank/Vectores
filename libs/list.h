/**
*@author Regina y Emilio
*@date 2 de sept 2021
*@name list.h
**/

#ifndef vector_h
#define vector_h
#include <stdlib.h>
#include <stdio.h>

#define VECTOR struct _vector

//struct
VECTOR
{
    float *elements;
    size_t nelements;
};
//Interfaz
typedef struct _vector* Vector;

//Constructor
Vector InitVector(size_t nelements);

Vector SetVectorSize(Vector myList, size_t newElements);

void printVector(Vector myList);

#endif
