#include "function_pointers.h"

/**
 * print_name -prints the name input in the function format
 * @f: the function to determine how the name would be printed.
 * @name: the name to be printed
 */
void print_name(char *name, void(*f)(char *))
{
	f(name);
}
