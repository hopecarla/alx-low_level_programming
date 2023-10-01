#include "main.h"
int strlen_recursion(char *s);
int check_pal(char *s, int i, int len);
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: string to reverse
 * Return: 1 if it is or 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, strlen_recursion(s)));
}
/**
 * strlen_recursion - returns length of a string
 * @s: string to calculate the lenght of
 * Return: length of a string
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_recursion(s + 1));
}
/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to be checked
 * @i: iterator
 * @len: length of the string
 * Return: 1 if it is palindrome or 0 otherwise
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i ) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
