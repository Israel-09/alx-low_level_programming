#include <stdio.h>
#include "dog.h"

int main(void)
{
	struct dog *my_dog;

	my_dog = new_dog("poppy", 3.5, "Bob");
	printf("My name is %s, i am %.2f years old\n", my_dog->name, my_dog->age); 
	return (0);
}
