#include <stdio.h>

int main(){
	const int len = 32;
	unsigned short trojkat[len][len];

	for(int i = 0; i < len; i++){
		for(int j = 0; j < len; j++){
			trojkat[i][j] = 0;
			if(j == 0){
				trojkat[i][j] = 1;
			}else if(i != 0){
				trojkat[i][j] = trojkat[i-1][j] + trojkat[i-1][j-1];
			}
			printf(trojkat[i][j] != 0 ? "%u " : "", trojkat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}