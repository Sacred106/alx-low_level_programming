#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
/**
 * _putchar - prints c
 * @c: returns c value
 * Return: returns value
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}

#endif /* defines header */
