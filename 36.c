#include <stdio.h>
int sum(int,int);

int main(){
  int add;
  add=sum(2,3);

  printf("%d",add);

}

int sum(int a,int b){
  return a+b;
}