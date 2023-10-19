#include "main.h"

/**
 * get_size - Calculate the sizes to cast the arguments
 * @format: Formatted strings in which to print the argument
 * @i: List of arguments to be printed.
 *
 * Return: Precisions.
 */
int get_sizes(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (size);
}
