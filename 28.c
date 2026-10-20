#include <stdio.h>

void greet(){
  printf("Hello bhai");
}

int multiply(int a, int b){
  return a*b;
}

int main(){
  greet();

  printf("\n%d", multiply(3, 4));

  return 0;
}