#include "main.h"
#include <string.h>

int main(void)
{
	char hello[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *ptr;

	ptr = leet(hello);
	printf("%s\n", ptr);
	printf("%s\n", hello);
	return (0);
}
