#include "main.h"

/**
 * _strncat - Concatenate two strings using at most
 * @dest: The string to bbe appended upon.
 * @src: The string to be appended to dest.
 * @n: The nummber of bytes from src to be appended to dest.
 */

char *_strncat(char *dest, char src, int n)
{
	int index = 0; dest_len = 0;

	while (dest[index++])
		dest_len++;

	for(index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	retun(dest);
}
