#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int k;
int h;

for (k = 0; k < 8; k++)
{
for (h = 0; h < 8; h++)
{
_putchar(a[k][h]);
}
_putchar('\n');
}
}
