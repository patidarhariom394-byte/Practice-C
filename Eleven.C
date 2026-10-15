#include <stdio.h>

int main(){

  int a,b,c;

  printf("\n Enter First number:--");
  scanf("%d", &a);

  printf("\n Enter second number:--");
  scanf("%d", &b);

  printf("\n Enter third number:--");
  scanf("%d", &c);

  if (a>b && a>c)
  {
    printf("\n a is greater than b and c");
  }

  else if (b>a && b>c)
  {
    printf("\n b is greater than a and c");
  }

  else{
    printf("\n c is greater than a and b");
  }
}