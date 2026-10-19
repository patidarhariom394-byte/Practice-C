#include <stdio.h>
int main(){
  int i=1,n,sum=0;

  printf("Enter n");
  scanf("%d",&n);

  while(i<=n){
    if(i%2!=0){
      sum=sum+i;
      i=i+1;
    }
  }

  printf("%d", sum);

  return 0;
}