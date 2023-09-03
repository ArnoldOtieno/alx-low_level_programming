#include "main.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: The string to be searched from
 * @needle: the string to be searched
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int indexchar;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		indexchar = 0;

		if  (haystack[indexchar] == needle[indexchar])
		{
			do {
			if  (needle[indexchar + 1] == '\0')
				return (haystack);
			indexchar++;
			} while (haystack[indexchar] == needle[indexchar]);
		}
		haystack++;
	}
	return ('\0');
}
