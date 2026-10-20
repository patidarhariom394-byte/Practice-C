#include <stdio.h>
int add(int,int,int,int);

int main(){
  int sum;

  sum=add(1,2,3,5);

  printf("Sum= %d",sum);
}

int add(int a,int b,int c,int d){
  int x;

  x=a+b+c+d;

  return x;
}