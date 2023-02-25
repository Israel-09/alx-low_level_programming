#include "main.h"

int main(int ac, char **av)
{
	char s[80];
	int pin;

	printf("Enter your username and pin (pass, pin): ");
	scanf("%s", s);
	scanf("%d", &pin);
	if (pin == 1234)
	{
		printf("Correct pin\nSuccessful Login!\n");
	}
	else
	{
		printf("THE pin is 1234");
		printf("Incorrect Pin\nTr Again.\n");
	}

	return (0);

}
