#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 */

void times_table(void)
{
	int no, no2, prod;

	for (no = 0; no <= 9; no++)
	{
		_putchar('0');

		for (no2 = 1; no2 <= 9; no2++)
		{
			_putchar (',');
			_putchar (' ');

			prod = no * no2;

			if (prod <= 9)
				_putchar (' ');
			else
				_putchar ((prod / 10) + '0');

			_putchar ((prod % 10) + '0');
		}
		_putchar ('\n');
	}
}
