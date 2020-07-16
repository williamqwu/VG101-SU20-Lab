#include "ex5.h"
#define HWX_SUM_H

int main() {
    int a, b;
    printf("Please input two integers: ");
    scanf("%d %d", &a, &b);
    printf("Quotient: %d\n",quo(a,b));
    printf("Remainder: %d\n",rem(a,b));
    printf("Sum: %d\n",sum(a,b));
    printf("Product: %d\n",prod(a,b));
    printf("Exponent: %ld\n",mpow(a,b));
    return 0;
}