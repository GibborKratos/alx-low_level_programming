#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int me;

        printf("Infinite loop incoming :(\n");

        me = 0;

        while (me < 10)
        {
                putchar(me);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
