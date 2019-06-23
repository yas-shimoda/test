#include <stdio.h>

void output_hello(int);

int main(void)
{
 int a;
 scanf("%d",&a);
 output_hello(a);
 return 0;
}

void output_hello(int a)
{
 int i=1;
 for(i=1; i<=a; i++) {
	printf("hello!\n");
  };
  return;
}
