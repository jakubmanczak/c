#include <stdio.h>
#include <stdbool.h>

int main(){
	const int len = 32;
	// const int def = 0xDEAD;
	unsigned short trojkat[len][len];

	for(int i = 0; i < len; i++){
		for(int j = 0; j < len; j++){
			// trojkat[i][j] = def;
			trojkat[i][j] = 0;
		}
	}

	for(int i = 0; i < len; i++){
		for(int j = 0; j < len; j++){
			if(j == 0){
				trojkat[i][j] = 1;
			}else if(i != 0){
				trojkat[i][j] = trojkat[i-1][j] + trojkat[i-1][j-1];
				// trojkat[i][j] = (trojkat[i-1][j] != def ? trojkat[i-1][j] : 0) + (trojkat[i-1][j-1] != def ? trojkat[i-1][j-1] : 0);
				// if(trojkat[i][j] == 0){
					// trojkat[i][j] = def;
				// }
			}
		}
	}

	for(int i = 0; i < len; i++){
		for(int j = 0; j < len; j++){
			// if(trojkat[i][j] != 0xDEAD && trojkat[i][j] != 0xDEED){
				// printf("%d ", trojkat[i][j]);
			// }
			printf(trojkat[i][j] != 0 ? "%u " : "", trojkat[i][j]);
		}
		printf("\n");
	}

	return 0;
}