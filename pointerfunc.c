#include <stdio.h>

void printDupa(int times){
	while(times){
		printf("dupa "); times--;
	} printf("\n");
}

int main(void){
	void (*pf)(int);
	pf = &printDupa;
	pf(5);
}