#include <stdio.h>
#define uchar unsigned char
#define uint unsigned int

int main(void){
	uchar bits = 0;
	uchar quit = 0;
	uchar input = 0xFF;

	while(!quit){
		printf("\033c"); input = 0xFF;
		printf("Current representation of bitfield: \n");
		printf("DEC: %i\n", bits);
		printf("BIN: ", bits);
		int i = sizeof(bits)*8;
		while(i--){
			putchar('0' + ((bits >> i) & 1));
		} printf("\n");
		printf("Please specify an action by inputting an integer.\n");
		printf("0:\tClear bit.\n");
		printf("1:\tSet bit.\n");
		printf("2:\tFlip bit.\n\n");
		printf("Your input: ");
		scanf("%d", &input);
		if(input == 0){
			printf("Which index bit to clear? (0-7): ");
			scanf("%d", &input);
			bits &= ~(1 << input);
		}else if(input == 1){
			printf("Which index bit to set? (0-7): ");
			scanf("%d", &input);
			bits |= (1 << input);
		}else if(input == 2){
			printf("Which index bit to flip? (0-7): ");
			scanf("%d", &input);
			bits ^= (1 << input);
		}
		printf("\n\n");
	}
}