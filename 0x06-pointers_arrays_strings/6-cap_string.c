#include "main.h"
#include <stdio.h>

/**
 * islower - determines whather ascii is lowercase
 * @c: character
 * Return: 1 if true, 0 if false
*/

int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determineswhether ascii is a deliniter
 * @c: character
 * Return: 1 if true, 0 if false
*/

int isDelimiter(char c)
{
	int i;
	char delimiteriter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiteriter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of string
 * @s: input string
 * return: string with capitalized words
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiteriter(*s))
			foundDelimit = 1;
		else if (islower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
