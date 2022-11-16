#include "shell.h"


/**
 * _strdup - duplicates a string
 * @str: pointer to string to duplicate
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	int i, j;
	char *dup_str;

	j = _strlen(str);
	if (str == NULL)
		return (NULL);
	dup_str = malloc(sizeof(char) * (j + 1));
	if (dup_str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		dup_str[i] = str[i];
	}
	dup_str[i] = '\0';
	return (dup_str);
}


/**
 * _splitstring - counts number of words in string
 * @str: pointer to string to count
 *
 * Return: number of words in string
 */
int _splitstring(char *str)
{
	int i;
	int searchflag = 1;
	int wordcount = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && searchflag == 1)
		{
			wordcount += 1;
			searchflag = 0;
		}
		if (str[i + 1] == ' ')
			searchflag = 1;
	}
	return (wordcount);
}


/**
 * _strcmp - compares two strings
 * @s1: string1
 * @s2: string2
 * Return: 0 if the strings are same else return difference between the strings
 */
int _strcmp(const char *s1, const char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}


/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int l1, l2, i;

	l1 = l2 = 0;

	while (dest[l1])
		l1++;
	while (src[l2])
		l2++;
	for (i = 0; i <= l2; i++)
		dest[l1 + i] = src[i];
	return (dest);
}


/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: integer type
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
