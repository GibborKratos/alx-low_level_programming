#include "main.h"
/**
  * print_alphabet_x10 - Print the alphabet 10 times.
  *
  * Return: ALways 0 (Success)
  */
void print_alphaber_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}

