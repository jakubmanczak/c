#include <stdio.h>
#include <stdbool.h>

void printDivider(){
	printf("\n");
	for(int i = 0; i < 8; i++) printf("== ==== ==");
	printf("\n\n");
}

int main(){
	const short len = 32;
	const short displaylen = 16;
	unsigned int trojkat[len][len];

	// populating the array structure
	for(int i = 0; i < len; i++){
		for(int j = 0; j < len; j++){
			trojkat[i][j] = 0;
			if(j == 0){
				trojkat[i][j] = 1;
			}else if(i != 0){
				trojkat[i][j] = trojkat[i-1][j] + trojkat[i-1][j-1];
			}
		}
	}

	printf("\t==== TRÓJKĄT  PASCALA ====\n\t  == by  jakubmanczak == \n");
	printDivider();
	for(int i = 0; i < displaylen; i++){
		for(int j = 0; j < displaylen; j++){
			printf(trojkat[i][j] != 0 ? "%-4u " : "", trojkat[i][j]);
		}
		printf("\n");
	}
	printDivider();

	printf("A. Największa liczba wchodząca w skład:\n");
	int max10 = trojkat[ 9][0];
	int max20 = trojkat[19][0];
	int max30 = trojkat[29][0];
	for(int i = 0; i < len; i++){
		max10 = trojkat[ 9][i] > max10 ? trojkat[ 9][i] : max10;
		max20 = trojkat[19][i] > max20 ? trojkat[19][i] : max20;
		max30 = trojkat[29][i] > max30 ? trojkat[29][i] : max30;
	}
	printf("\t10-tego wiersza: %d\n", max10);
	printf("\t20-tego wiersza: %d\n", max20);
	printf("\t30-tego wiersza: %d\n", max30);

	printf("\nB. Zestawienie indeksu wiersza oraz liczby jego cyfr:\n");
	printf("\tTODO!\n");
	
	printf("\nC. Podaj numery wierszy, które nie zawierają liczb podzielnych przez 5.\n");
	printf("\t");
	for(int i = 0; i < len; i++){
		bool fiveMod = false;
		for(int j = 0; j < len; j++){
			if(trojkat[i][j] % 5 == 0 && trojkat[i][j] != 0) {
				fiveMod = true;
			}
		}
		if(!fiveMod){
			printf("Wiersz %2d; ", i+1);
		}
	}
	printf("\n");
	
	printf("\nD. Graficzny rozkład liczb znajdujących się w trójkącie...\n");
	printf("\tTo już musi być zrobione w Excelu...\n");
	
	return 0;
}