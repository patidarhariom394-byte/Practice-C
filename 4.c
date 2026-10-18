#include <stdio.h>
int main(){
  int a,b;
  char e;

  printf("enter a and b-- ");
  scanf("%d", &a);

  scanf("%d", &b);

  printf("Enter operator44");
  scanf(" %c", &e);

  if (e=='+'){
    printf("a+b=%d", a+b);
  }

  else if (e=='-'){
    printf("a-b=%d", a-b);
  }

  else if(e=='*'){
    printf("a*b=%d", a*b);
  }

  else if(e=='/'){
    printf("a/b=%d", a/b);
  }

  else
  printf("Invalid operator");
}