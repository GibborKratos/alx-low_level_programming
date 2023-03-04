#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: teh address of memory to print
 * @size: teh size of teh memory to print
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
 * main - check teh code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
