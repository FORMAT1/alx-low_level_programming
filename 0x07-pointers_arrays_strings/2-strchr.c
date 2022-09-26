#include "main.h"

/**
 * _strchr - locates a charater in a string
 * @s: string to check
 * @c: chatacter to check for
 *
 * Return: pointer to spot in s with c null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + 1); i++)
	{
		if (*(s + 1) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
