#include <stdio.h>
int main(){
  int i=1, *j, **k;
  j=&i;
  k=&j;

  printf("%p", &i);
  printf("\n%p",j);
  printf("\n%d",*j);
  printf("\n%d",i);

  printf("\n\n%p",k);
  printf("\n%d",*(*k));
}