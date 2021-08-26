/**
 * @Author Ana Regina Morfín
 * @Date 17 Aug 2021
 * @Name ComplexNumber.h
 */

#ifndef ComplexNumber_h
#define ComplexNumber_h

#include <stdio.h>

struct _Complex_Number{
    float real; // 32 bits
    float imaginary; // 32 bit
};

typedef struct _Complex_Number* ComplexNumber;
typedef enum{
    _FALSE,
    _TRUE
}_bool;

ComplexNumber newComplexNumber(void);
ComplexNumber setComplexNumber(ComplexNumber phasor, float real, float imaginary);
ComplexNumber freeComplexNumber(ComplexNumber phasor);
void getComplexNumberComponents(ComplexNumber test_number, float *real, float *imaginary);

#endif
