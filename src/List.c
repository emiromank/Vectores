#include <stdio.h>
#include <stdlib.h>
#include "../libs/list.h"

Vector InitVector(size_t elements)
{
    Vector newList = NULL;
    newList = malloc(sizeof(Vector));

    newList->nelements = elements;
    newList->elements = calloc(elements, sizeof(float));

    return newList;
};

Vector SetVectorSize(Vector myList, size_t newElements)
{
    myList->nelements = newElements;
    myList->elements = realloc(myList, newElements * sizeof(float));

    return myList;
};

void printVector(Vector myList)
{
    for (size_t n = 0; n < myList->nelements; n++)
    {
        printf("\tMemory Address: %p\n\tElement Number: %ld\n\tValue: %f\n", (myList->elements) + n, n, myList->elements[n]);
    }
};
