#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbeer of args
 * @argc: argument count
 * @argv: argumant vector
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
