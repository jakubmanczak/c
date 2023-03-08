#include <stdio.h>

int performLeftBitshift(int *target){
	return *target*2;
}

void performRightBitshift(int *target){
	*target = *target / 2;
}

int main(){
	int a = 10;
	int *pA = &a;
	int b = *pA;
	printf("%d\n\n", b);

	int num = 2;
	printf("%d\n", num);
	num = performLeftBitshift(&num);
	printf("%d\n", num);

	int hello = 20;
	printf("%d\n", hello);
	performRightBitshift(&hello);
	printf("%d\n", hello);
	performRightBitshift(&hello);
	printf("%d\n", hello);

	return 0;
}
