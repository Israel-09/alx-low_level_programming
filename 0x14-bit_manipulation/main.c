#include <stdio.h>
#include "main.h"

/**
 * main - check the code
<<<<<<< HEAD
  *
   * Return: Always 0.
    */
int main(void)
{
	printf("%d\n", 10^4);
=======
 *
 * Return: Always 0.
 */
int main(void)
{
        unsigned int n;
	
	n = flip_bits(1024, 1);
	printf("%u\n", n);
	n = flip_bits(402, 98);
	printf("%u\n", n);
	n = flip_bits(1024, 3);
	printf("%u\n", n);
	n = flip_bits(1024, 1025);
	printf("%u\n", n);

	print_binary(n);
	return (0);
>>>>>>> refs/remotes/origin/master
}
