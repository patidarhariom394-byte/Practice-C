#include <stdio.h>
 int fact(int);

 int main(){
  int x,m;

  printf("Enter the number--\t");
  scanf("%d",&x);

  m=fact(x);

  printf("\n%d",m);
 }

 int fact(int x){
  if(x<0){
    printf("Not defined");
    return 0;
  }

  else if(x==0||x==1){
    return 1;
  }

  else{
    return x*fact(x-1);
  }
  
  
 }