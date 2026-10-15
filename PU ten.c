#include <stdio.h>

int main() {

  int a,b;

  printf("\n Enter first no.--");
  scanf("%d", &a);

  printf("\n Enter second no.--");
  scanf("%d", &b);

  if (a>b)
  {
    printf("\n a is greater than b");
  }

  else
  {
    printf("\n b is greater than a");
  }

  return 0;
}