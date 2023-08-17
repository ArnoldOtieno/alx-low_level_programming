#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: returns nothing
 */
void jack_bauer(void)
{
	int g, h, k, l;

	for (g = 0; g <= 2; g++)
	{
		for (h = 0; h <= 9; h++)
		{
			if ((g <= 1 && h <= 9) || (g <= 2 && h <= 3))
			{
				for (k = 0; k <= 5; k++)
				{
					for (l = 0; l <= 9; l++)
					{
						_putchar(g + '0');
						_putchar(h + '0');
						_putchar(58);
						_putchar(k + '0');
						_putchar(l + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
