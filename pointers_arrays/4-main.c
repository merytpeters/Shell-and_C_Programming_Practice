#include <stdio.h>

/**
* main - Storing the address of variable into a pointer
*
* Return: Always 0.
*/
int main(void)
{
    int n;
    int *p;

    n = 55500;
    p = &n;
    printf("Address of 'n': %p\n", &n);
    printf("Value of 'p': %p\n", p);
    return (0);
}
