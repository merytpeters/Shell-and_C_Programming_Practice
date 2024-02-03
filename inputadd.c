#include <stdio.h>

int main()
{
         int a;
         double b;
         double sum;
         printf("Enter numbers: ");
         scanf("%d %lf", &a, &b);

         sum = a + b;
         printf("%lf", sum);
         return (0);
}
