#include <stdio.h>

int main(){

  int a,b,c,d,e,f;
  float p;

  printf("\n Enter a marks---");
  scanf("%d", &a);

  printf("\n Enter b marks---");
  scanf("%d", &b);

  printf("\n Enter c marks---");
  scanf("%d", &c);

  printf("\n Enter d marks---");
  scanf("%d", &d);

  printf("\n Enter e marks---");
  scanf("%d", &e);

  f=a+b+c+d+e;
  p=f/5;

  if (p>=80 && p<=100)
  {
    printf("\n Dist %f", p);
  }

  else if (p>=60 && p<=79)
  {
    printf("\n First class %f", p);
  }

  else if (p>=35 && p<=59)
  {
    printf("\n Second class %f",p);
  }

  else
  {
    printf("\n Fail %f", p);
  }

  return 0;
}