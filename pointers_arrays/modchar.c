#include <stdio.h>

/**
* modify_my_char_var - Modifies the char
*
* Return: Nothing
*/
void modify_my_char_var(char *cc, char ccc)
{
    *cc = 'd';
    ccc = 'l';
    printf("Value of 'cc': %p\n", cc);
    printf("Address of 'cc': %p\n", &cc);
}

/**
* main - Change value
* Return: Always 0.
*/
int main(void)
{
    char c;
    char *p;

    p = &c;
    c = 'H';
    printf("Value of 'c' before mod: %d (%c)\n", c, c);
    printf("Address of 'c': %p\n", &c);
    printf("Value of 'p': %p\n", p);
    printf("Address of 'p': %p\n", &p);
    modify_my_char_var(p, c);
    printf("Value of 'c' after mod: %d (%c)\n", c, c);
    return (0);
}
