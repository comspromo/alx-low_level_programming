/*
 * File: 7-print_tebahpla.c
 * enjoy
 */

#include <stdio.h>

/**
 * main - Write a program that prints the lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}

