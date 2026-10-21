#include <stdio.h>

int  main(){
  int i=4;
  int *j, **k;
  j=&i;
  k=&j;
  printf("Address of i=%p",&i);
  printf("\nVlaue of i=%d", *(&i));
  printf("\nVlaue if j-- %p", j);
  printf("\nValue of i--%d",*j);
  printf("\nAddress of i = %p",*k);
}