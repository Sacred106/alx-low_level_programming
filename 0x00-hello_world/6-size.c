#include <stdio.h>



/**
 * main - Entry point
 * @a - integer
 * @b - Long integer
 * @c - Longer integer
 * @d - character
 * @f - float
 * printf - prints function
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
char a;

int b;

long int c;

long long int d;

float f;

printf("Size of an int: \t\t %zu byte(s)\n", sizeof(a));
printf("Size of a long int: \t\t %zu byte(s)\n", sizeof(b));
printf("Size of a long long int: \t\t %zu byte(s)\n", sizeof(c));
printf("Size of a char: \t\t %zu byte(s)\n", sizeof(d));
printf("Size of a float: \t\t %zu byte(s)\n", sizeof(f));
										return (0);

}
