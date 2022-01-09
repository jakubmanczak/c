#include <stdio.h> // Standard Input/Output Header
#include <stdbool.h> // Standard Boolean Header

int main(){ // function ran on file execution
	printf("\033c"); // This clears the commandline. Linux and *modern* Windows versions only

	/*
			==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ===
			==== ==== ==== ==== I N T R O D U C T I O N ==== ==== ==== ====
			==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ===
	*/

	printf("Hello World.\nThis is a second line!\n"); // prinf() for printing to console

	printf("\tHello! This line is tabbed!!\n");
	printf("\t\tThis is doubly tabbed. Understandable, no?\n");
	printf("\t\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");
	// \n for newline and \t for tabbed text
	// use \ for escaping characters otherwise used to signify an action

	// Variables allocate space in memory to store a value.
	int x; // declaration
	x = 123; // initialisation
	int y = 321; // declaration + initialisation
	int age = 17;
	float agePrecisely = 17.34;
	char letterX = 'x';
	// int for whole numbers, float for floating point numbers, char for single characters

	// there is NO STRING IN C!!!
	char name[] = "jakubmanczak"; // this is an array of characters, not a string

	printf("Age is equal to %d right now.\n", age); // %d for (integer) digit i guess

	printf("The name's %s, yes.\n", name); // %s for string, even though it doesn't exist

	printf("Age precisely is equal to %f.\n\n", agePrecisely); // %f for float

	char letterA = 'a';
	char sameLetter = 97; // letters have a digit representation in the ACSII table
	
	printf("letterA holds the %c character.\n", letterA); // there's %c for chars
	printf("sameLetter does so as well: %c.\n", sameLetter);
	printf("You can see the letter code if you use the wrong format specifier: %d.\n", letterA);

	/*
			==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ====
			==== ==== ==== ==== D A T A   T Y P E S	==== ==== ==== ====
			==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ====
	*/

	char character = 'C'; // a single character	- %c
	char string[] = "CCCC"; // an array of chars	- %s

	float pi = 3.141592; // 4 bytes, 6-7 digits - %f
	double piMore = 3.141592653589793; // 8 bytes, 15-16 digits - %lf (also known as long float)

	/* to use booleans include <stdbool.h> */
	bool trueOrFalse = true; // 1 byte (true or false) - %d
	// uses up 1 byte even though we'd only need one bit of memory
	// %d shows 0 or 1 as false or true!!

	char notCharacter = 100; // chars can store an integer from (-128 to 127) as the formatting is the same
	// displaying a char as %d shows the number, %c would look for the value of the char
	// printf("%d", notCharacter); // output: 100
	// printf("%c", notCharacter); // output: d

	unsigned char notCharTheSecond = 255; // if we add the 'unsigned' keyword to a variable,
	// we eliminate the negative numbers giving an unsigned char a numerical range of 0 to 255
	// %d to display								also gtk is that most datatypes are 'signed' automatically 

	// overflow - if we give an unsigned char a value of 256, it will go back to lowest number and increment

	int wholeNumber = 2147483647; // 4 bytes, range from (-2.147.483.648 to 2.147.483.647) 									%d
	short int wholeSmolNumber = 32767; // 2 bytes, range from (-32.768 to 32.767) 													%d
	unsigned short int wholeSmolPositiveNumber = 65535; // 2 bytes, range from (0 to 65.535)								%d

	unsigned int wholeBigNumber = 4294967295; // 4 bytes, range from (0 to 4.294.967.295)										%u
	// overflow - writing [...]6 instead of 5 would result in 0, [...]7 would result in 1 etc..

	// writing 'short' instead of 'short int' does the same thing, so some refer to them as 'shorts'

	// standard integers are 'longs' by default, we can use long twice to bump those numbers up though
	long long int lonkNumber = 9223372036854775807; // 8 bytes, from (-9 quintilltion to 9 quintillion)			%lld
	unsigned long long int veryLonkNumber = 18446744073709551615U; // 8 bytes, from (0 to 18 quintillion)		%llu
	// overflow - once again if we increment these numbers by one, they'll go to their lowest and incr.

	// warning: unsigned long long int is so large that it is unsigned
	// this will display since 18 quintillion is a really large number
	// we can add a U to the end of that number to avoid such warnings
	// like was done above

	/*
			==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ===
			==== ==== ==== ==== F O R M A T   S P E C I F I E R S ==== ==== ==== ====
			==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ==== ===
	*/

	// Using a format specifier within a printf() stmt we can
	// define and format the type of data to be displayed

	// 				%c		CHARACTER												%s		STRING (array of chars)
	// 				%f		FLOAT														%lf		DOUBLE (long float)
	// 				%d		INTEGER & shorts and stuff			%u		UNSIGNED INTEGERS (up to 4.294.967.295)
	//				%lld	LONG LONG INT (9 quintillion)		%llu	UNSIGNED LONG LONG INT (18 quintillion)

	// When dealing with floats we might want to limit how many digits we want to show
	// In order to do this we can type %.1f to limit it to one place after the comma
	// or insert other values like $.4f to show 4 places after the comma

	// There is also a property called minimum field width, deciding how many spaces
	// to dedicate to displaying a number			We can type %8 to give a number 8 chars
	// to work with. We can combine this with the decimal precision like so: %6.2f

	// %8.2f Output:
	/*
			Item 1: $    5.25
			Item 2: $   10.00
			Item 3: $  100.99
	*/

	// We can also invert this by putting a minus sign in front of the min field width
	// if we wanted to keep it all aligned when putting more text in the same lines

	// %-8.2f Output:
	/*
			Item 1: $5.25    More text to show
			Item 2: $10.00   More text to show
			Item 3: $100.99  More text to show
	*/

	return 0; // good practice
}