#include <stdio.h>
int revn(int i, int rev){
  int rem;

  if(i==0){
    return rev;
  }

  rem=i%10;
  rev=rev*10+rem;

  return revn(i/10, rev);
}
int main(){
  int rev_No, n;

  printf("Enter the number-- ");
  scanf("%d", &n);

  rev_No=revn(n,0);

  printf("\n%d",rev_No);
}