#include <stdio.h>

int change( int );

int main(void){
	int i = 5;
	int j;
	j = change(i);

	printf("%d ->%d \n", i,j);
	return 0;
}

int change(int i){
	return -i;
}
