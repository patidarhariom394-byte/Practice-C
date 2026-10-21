#include <stdio.h>

void max(int a, int b);

int main(){
  int n,m;
  printf("Enter two numbers-- ");
  scanf("%d %d",&n,&m);

  max(n,m);

}

void max(int a, int b){
  if(a>b){
    printf("%d",a);
  }
  else{
    printf("%d",b);
  }
}