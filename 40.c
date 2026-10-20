#include <stdio.h>
void sqr(int);

int main(){
  int n;

  printf("Welcome to HOPS");

  printf("\n\n Enter the digit--");
  scanf("%d",&n);

  sqr(n);
}

void sqr(int a){
  int s;

  s=a*a;

  printf("The sqr of n is= %d",s);
}
