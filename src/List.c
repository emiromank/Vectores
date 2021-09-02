#include <stdio.h>
#include <stdlib.h>
#include "../libs/List.h"

List *InitList(size_t elements)
{
    List *newList = NULL;
    newList = malloc(sizeof(List));

    newList->elements = elements;
    newList->list = calloc(elements, sizeof(float));

    return newList;
};

List *SetListSize(List *myList, size_t newElements)
{
    myList->elements = newElements;
    myList->list = realloc(myList, newElements * sizeof(float));

    return myList;
};

void printList(List *myList)
{
    for (size_t n = 0; n < myList->elements; n++)
    {
        printf("\tMemory Address: %p\n\tElement Number: %d\n\tValue: %f\n", (myList->list) + n, n, myList->list[n]);
    }
};
