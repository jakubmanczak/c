#include <stdio.h>

// this compiles with -std=c2x or -std=c23 flags
// but fails without
int main(void){
	bool a = true;
	return a ? 0 : 1;
}
