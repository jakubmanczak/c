#include <stdio.h>
#include <string.h>

int main(){
	printf("\033c");
	int age;
	char name[25]; // bytes, or letters

	printf("What's your name? ");
	// scanf("%s", &name);
	fgets(name, 25, stdin);
	name[strlen(name) - 1] = '\0';
	// scanf() only gets input up to the first space, so if we want to include a surname,
	// we're going to have to use the fgets() function, then remove the last character
	// which would be the newline character, as it will mess up our printf later on

	printf("How old are you? ");
	scanf("%d", &age);

	printf("\nYour name is %s.", name);
	printf("\nYou are %d years old.", age);

	return 0;
}