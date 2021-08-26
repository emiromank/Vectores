/**
 * @Author Ana Regina Morfín
 * @Date 17 Aug 2021
 * @Name ComplexNumber.c
 */

//Librerías
#include <stdio.h>
#include <stdlib.h>
#include "../libs/ComplexNumber.h"
//#include "ComplexNumber.h"

//Instancia
ComplexNumber newComplexNumber(void)
{
  ComplexNumber my_number = NULL;
  my_number = malloc(sizeof(struct _Complex_Number));
  return my_number;
}

//my_number se guarda en la parte real e imaginaria
ComplexNumber setComplexNumber(ComplexNumber new_number, float real, float imaginary)
{
  new_number->real = real;
  new_number->imaginary = imaginary;
  return new_number;
}

//Llama a getReal y getImaginary para obtener los números complejos
void getComplexNumberComponents(ComplexNumber test_number, float *real, float *imaginary)
{
  float getReal(ComplexNumber number);
  float getImaginary(ComplexNumber number);
  *real = phasor->real;
  *imaginary = phasor->imaginary;
}

//Parte real del número complejo
float getReal(ComplexNumber number)
{
  //return number->real;
  //*real = phasor->real;
}

//Parte imaginaria del número complejo
float getImaginary(ComplexNumber number)
{
  //return number->imaginary;
  //*imaginary = phasor->imaginary;
}

//Liberar memoria donde se guarda número complejo
ComplexNumber freeComplexNumber(ComplexNumber target)
{
  free(target);
  target = NULL;
  return target;
}
