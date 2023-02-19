#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int main()
{
	char *goal;
	
	char *home = "Hello World!";
	goal = _strdup(home);
	if (goal == NULL)
	{
		puts("not available");
		return (1);
	}
	puts(goal);
	return (0);

}
