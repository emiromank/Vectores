#include <stdio.h>
#include <stdlib.h>
#include "../libs/vector.h"

Vector *InitVector(size_t elements)
{
    Vector *newVector = NULL;
    newVector = malloc(sizeof(Vector));

    newVector->elements = elements;
    newVector->list = calloc(elements, sizeof(float));

    return newVector;
};

Vector *SetVectorSize(Vector *myVector, size_t newElements)
{
    myVector->list = realloc(myVector, newElements * sizeof(float));
    myVector->elements = newElements;
 
    return myVector;
};

void printVector(Vector *myVector)
{
    for (size_t n = 0; n < myVector->elements; n++)
    {
        printf("\tMemory Address: %p\n\tElement Number: %ld\n\tValue: %f\n", (myVector->list) + n, n, myVector->list[n]);
    }
};
