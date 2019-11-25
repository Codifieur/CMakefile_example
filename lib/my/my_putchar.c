/*
** CMAKEFILE EXAMPLE, 2019
** my_putchar.c
** File description:
** Print a simple char
*/

#include <unistd.h>

void my_putchar(char c)
{
	write (1, &c, 1);
}
