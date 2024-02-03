#include <stdio.h>
int main(void)
{
        double a, b , prod;
        printf("Enter two numbers: ");
        scanf("%lf %lf", &a ,&b);
        
        prod = a * b;
        printf("%lf", prod);
        return (0);
}
