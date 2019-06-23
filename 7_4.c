#include <stdio.h>

int kaijou(int);

int main(void)
{
 int a;
 scanf("%d",&a);
 printf("input=%d kaijou=%d\n",a,kaijou(a));
 return 0;
}

int kaijou(int a)
{
 int i=1;
 int j=1;

 for(i=1; i<=a; i++) {
    j=j*i;
  };
 return j;
}
