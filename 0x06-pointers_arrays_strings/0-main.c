#include "main.h"
#include <string.h>

int main(void)
{
	char ptr[40] = "my mother, id hte th best 9jd i evev";
	char *mess = cap_string(ptr);
	puts(mess);
	return (0);
}
