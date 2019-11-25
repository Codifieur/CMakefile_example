/*
** CMAKEFILE EXAMPLE, 2019
** main.c
** File description:
** Entry point
*/

#include <stdio.h>

#include "my.h"
#include "operation.h"

int main(void)
{
	printf("add(1, 1) = %d\n", my_add(1, 1));
	printf("sub(1, 1) = %d\n", my_sub(1, 1));
	printf("div(1, 1) = %d\n", my_div(1, 1));
	printf("mul(1, 1) = %d\n", my_mul(1, 1));
	my_putchar('G');
	my_putchar('G');
	my_putchar(' ');
	my_putchar('!');
	my_putchar('\n');
	return (0);
}
