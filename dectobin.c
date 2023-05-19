#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void printbinary(int num){
	int i = sizeof(num)*8;
	while(i--){
		putchar('0' + ((num >> i) & 1));
	} printf("\n");
}

int main(int argc, char** argv){
	int decimal =0xFFFF;
	if(argc <= 1){
		printf("Please input a number: ");
		scanf("%d", &decimal);
	}else if(argc > 1) decimal = atoi(argv[1]);

	printf("DEC: %d\n", decimal);
	printf("BIN: "); printbinary(decimal);

	return 0;
}