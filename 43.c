#include <stdio.h>

void tryswap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("Inside tryswap - a: %d, b: %d\n", *a, *b);

}

int main(){
  int x=10,y=20;

  tryswap(&x,&y);
}