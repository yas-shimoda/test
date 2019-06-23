#include <stdio.h>

int return_seki(int i, int j);

int main (void) {
	int i=2;
	int j=3;
	int k;

	k=return_seki(i,j);

	printf(" %d X %d = %d\n", i, j, k);

	return 0;
}

int return_seki( int i, int j){
	return i*j;
}
