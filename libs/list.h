/**
*@author Regina y Emilio
*@date 2 de sept 2021
*@name list.h
**/

#ifndef list_h
#define list_h

#define LIST struct list

//struct
LIST
{
    float *list;
    size_t elements;
};
//Interfaz
typedef LIST List;

//Constructor
List *InitList(size_t elements);

List *SetListSize(List *myList, size_t newElements);

void printList(List *myList);

#endif
