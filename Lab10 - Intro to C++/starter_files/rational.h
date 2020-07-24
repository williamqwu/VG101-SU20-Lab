#ifndef RATIONAL_H
#define RATIONAL_H

typedef struct rational_t
{
    int num; //Numerator
    int den; //Denominator, always positive
} RationalInt;
int gcd(int a, int b);
void reduce(RationalInt *a);
void set(RationalInt *a, int num, int den);
void add(RationalInt *a, const RationalInt b);
void subtract(RationalInt *a, const RationalInt b);
void multiply(RationalInt *a, const RationalInt b);
void divide(RationalInt *a, const RationalInt b);
void print(RationalInt *a);
void print(RationalInt *a);

#endif
