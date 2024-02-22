#include <stdio.h>

int main(void){
  for(int i = 1; i < 2021; i++){
    if(i % 6 == 5 && i % 7 == 5 && i % 8 == 5 && i % 9 == 5){
      printf("%d\n", i);
    }
  }
  return 0;
}