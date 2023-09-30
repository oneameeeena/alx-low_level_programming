#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet) speak.
 * @str: The input string to be encoded.
 *
 * Return: Pointer to the resulting string.
 */
char *leet(char *str)
{
	char *leet_letters = "aAeEoOtTlL";
	char *leet_codes = "4433007711";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leet_letters[j]; j++)
		{
			if (str[i] == leet_letters[j])
			{
				str[i] = leet_codes[j];
				break;
			}
		}
	}
	return (str);
}

