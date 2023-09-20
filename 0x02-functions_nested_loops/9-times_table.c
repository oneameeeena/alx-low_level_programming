#include "main.h"
/**
* times_table - display 9 time table
*
* Return: always empty
*/
void times_table(void)
{
	int x, y, z, u, d;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z > 9)
			{
				u = z % 10;
				d = z / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}

