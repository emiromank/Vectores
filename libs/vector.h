/**
*@author Regina y Emilio
*@date 2 de sept 2021
*@name vector.h
**/

#ifndef vector_h
#define vector_h

#define VECTOR struct vector

//struct
VECTOR
{
    float *list;
    size_t elements;
};
//Interfaz
typedef VECTOR Vector;

//Constructor
Vector *InitVector(size_t elements);

Vector *SetVectorSize(Vector *myVector, size_t newElements);

void printVector(Vector *myVector);

#endif
