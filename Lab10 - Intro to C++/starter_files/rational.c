#include <stdio.h>
#include "rational.h"
int gcd(int a, int b)
//return the greatest common divisor of a and b, might be negative.
{
    return b ? gcd(b, a % b) : a;
}
void reduce(RationalInt *a)
{
    //TODO: reduce the fraction num/den, save the answer in a
    //TODO: make sure the denominator is always positive
}
void set(RationalInt *a, int num, int den)
{
    //TODO: set a with reduced num/den
}
void add(RationalInt *a, const RationalInt b)
{
    //TODO: add b to a, save the reduced answer in a
}
void subtract(RationalInt *a, const RationalInt b)
{
    //TODO: subtract b from a, save the reduced answer in a
}
void multiply(RationalInt *a, const RationalInt b)
{
    //TODO: mulitply a with b, save the reduced answer in a
}
void divide(RationalInt *a, const RationalInt b)
{
    //TODO: divide a by b, save the reduced answer in a
}
void print(RationalInt *a)
{
    printf("%d/%d\n", a->num, a->den);
}