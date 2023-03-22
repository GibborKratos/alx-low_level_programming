#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int me;

    me = 0;
    while (me < size)
    {
        if (me % 10)
        {
            printf(" ");
        }
        if (!(me % 10) && me)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[me]);
        me++;
    }
    printf("\n");
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int me;

    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    me = 0;
    while (me < 98)
    {
        p[me++] = 98;
    }
    simple_print_buffer(p, 98);
    free(p);
    return (0);
}
