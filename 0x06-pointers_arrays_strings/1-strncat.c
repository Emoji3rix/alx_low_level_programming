#include "main.h"

/**
 * _strncat - a function that concatenate two strings
 *
 * @dest: a string to be appended upon
 * @src: string to be appended to dest
 * @n: number of bytes from src to be appende
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
