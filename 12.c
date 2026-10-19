#include <stdio.h>
int main(){
  int balance=50000;
  int wd_amt;

  printf("Welcome to ATM");
  printf("\n Enter the withdrawal amount--");
  scanf("%d", &wd_amt);

  if(wd_amt>0){
    if(wd_amt>balance){
      printf("You have not sufficient");
    }else{
      if(wd_amt%100==0){
        printf("Your withdrawal is processing");
        printf("\n----------\n");
        printf("Your current balance is %d", balance-wd_amt);

      }else{
        printf("Today only 100Rs. notes available");
      }
    }
  }else{
    printf("Type correct number");
  }

  return 0;
}