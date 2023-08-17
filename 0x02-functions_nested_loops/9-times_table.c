#include "main.h"
/**
 * times_table - prints 9 timetable
 * Return: returns nothing
 */
void times_table(void)
{
	int q, w, r, t, i;

	for (q = 0; q <= 9; q++)
	{
		for (w = 0; w <= 9; w++)
		{
			r = q * w;
			if (r > 9)
			{
				t = r % 10;
				i = (r - t) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(i + '0');
				_putchar(t + '0');
			}
			else
			{
				if (w != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(r + '0');
			}
		}
		_putchar('\n');
	}
}
