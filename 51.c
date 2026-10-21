#include <stdio.h>

void isPrime(int n){
  int count=0;
  for(int i=1;i<n;i++){
    if(n%i==0){
      count+=1;
    }
  }

  if(count==1){
    printf("\n %d is prime No.", n);
  }
  else{
    printf("Composite No.");
  }
}

int main(){
  int x;

  printf("Enter the number--");
  scanf("%d",&x);

  isPrime(x);
}