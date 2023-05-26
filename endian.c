#include <stdio.h>
#include <stdint.h>

int main(){

  uint16_t bits = 0xFF00;

  FILE* file = fopen("test.bin", "wb");
  // uint8_t temp;
  // temp = bits >> 8;
  fwrite(&bits, 2, 1, file);
  fclose(file);

  return 0;
}