#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int me;
    int j;

    me = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", me, j);
    return (0);
}
