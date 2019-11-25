/*
** CMAKEFILE EXAMPLE, 2019
** operation.c
** File description:
** Basics operations
*/

#include "my.h"

int my_add(int a, int b)
{
    return (a + b);
}

int my_sub(int a, int b)
{
    return (a - b);
}

int my_div(int a, int b)
{
    if (b == 0)
        return (0);
    return (a / b);
}

int my_mul(int a, int b)
{
    return (a * b);
}