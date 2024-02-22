#include <stdio.h>

enum dni{
  PONIEDZIALEK = 5, WTOREK, SRODA, CZWARTEK = 15,
  PIATEK = 1, SOBOTA, NIEDZIELA, WIN, MAC, LINUX, PIEROGI
};

int main(void){
  if(PONIEDZIALEK == MAC) printf("aaa\n");
  return 0;
}
