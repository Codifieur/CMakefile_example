/*
** CMAKEFILE EXAMPLE, 2019
** tests_operation.c
** File description:
** Tests for operation
*/

#include <criterion/criterion.h>
#include "operation.h"

Test(add, basic)
{
    cr_assert_eq(my_add(1, 1), 2);
    cr_assert_eq(my_add(1, -1), 0);
    cr_assert_eq(my_add(-1, 1), 0);
    cr_assert_eq(my_add(0, 0), 0);
}

Test(sub, basic)
{
    cr_assert_eq(my_sub(1, 1), 0);
    cr_assert_eq(my_sub(1, -1), 2);
    cr_assert_eq(my_sub(-1, 1), -2);
    cr_assert_eq(my_sub(0, 0), 0);
}

Test(div, basic)
{
    cr_assert_eq(my_div(1, 1), 1);
    cr_assert_eq(my_div(1, -1), -1);
    cr_assert_eq(my_div(-1, 1), -1);
    cr_assert_eq(my_div(0, 0), 0);
}

Test(mul, basic)
{
    cr_assert_eq(my_mul(1, 1), 1);
    cr_assert_eq(my_mul(1, -1), -1);
    cr_assert_eq(my_mul(-1, 1), -1);
    cr_assert_eq(my_mul(0, 0), 0);
}