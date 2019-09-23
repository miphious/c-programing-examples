#include <stdio.h>
#include <stdlib.h>

int main ()
{
	//char array for string
	char characterName[] = "John";
	int characterAge = 35;
	//%s to say we want to add string
	printf("There once was a man named %s\n",characterName);
	//%d to say we want to add an number
	printf("he was %d years old.\n", characterAge);
	return 0;
}
