#include <stdio.h>

int main(){
  char a;

  printf("\n Enter value---");
  scanf("%c", &a);

  printf("\n ASCII value of %c is %d",a,a);

  if (a>=65 && a<=90)
  {
    printf("\n Capital letter");
  }

  else if (a>=97 && a<=122)
  {
    printf("\n Small letter");
  }

  else if (a>=48 && a<=57)
  {
    printf("\n digit");
  }

  else
  {
    printf("\n Special char");
  }

  return 0;
} 