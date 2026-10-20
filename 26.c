#include <stdio.h>
int main(){
  int i=1,n;
  int sum=0;

  printf("Enter the n--");
  scanf("%d",&n);

  for(i;i<=n;i++){
    sum=sum+i;
  }

  printf("%d",sum);

  return 0;
}