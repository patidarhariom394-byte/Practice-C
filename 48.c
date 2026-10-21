#include <stdio.h>
int sumOfN(int);

int main(){
  int n, sum;

  printf("Enter the number-- ");
  scanf("%d",&n);

  sum=sumOfN(n);
  printf("\n Sum of first n is= %d",sum);
}

int sumOfN(int n){
  if(n==0){
    return 0;
  }

  else{
    return n+sumOfN(n-1);
  }
}