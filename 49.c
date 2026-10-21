#include <stdio.h>
int revn(int i){
  int rem,rev=0;

  if(i==0){
    return 0;
  }

  rem=i%10;
  rev=rev*10+rem;

  return rev+revn(i/10);
}
int main(){
  int rev_No, n;

  printf("Enter the number-- ");
  scanf("%d", &n);

  rev_No=revn(n);

  printf("\n%d",rev_No);
}