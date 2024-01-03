#include <stdio.h>

int main(void){
	int dec = 1234;
	int hex = 0xFF00;
	int bin = 0b0110101001001;
	printf("dec: %d\n", dec);
	printf("hex: %x\n", hex);
	printf("bin: %d %x\n", bin, bin);
	return 0;
}
