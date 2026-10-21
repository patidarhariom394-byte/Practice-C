#include <stdio.h>
void maxm(int,int);

int main(){
  int a,b;
  printf("Welcome to the max function\n");
  printf("Enter first number--\n");
  scanf("%d",&a);
  printf("Enter the second number--\n");
  scanf("%d",&b);

  maxm(a,b);
}

void maxm(int a, int b){
  if(a>b){
    printf("%d is greater",a);
  }
  else if(b>a){
    printf("%d is greater",b);
  }

  else{
    printf("Both are equal");
  }
}