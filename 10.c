#include <stdio.h>
int main(){
  int units, price=0;

  printf("enter the used units--");
  scanf("%d", &units);

  if(units>=1 && units<=100){
    price+=units*2;
  }

  else if(units>=101 && units<=200){
    units=units%100;

    price=200+units*3;
  }

  else if(units>200){
    units=units-200;

    price=500+units*5;
  }

  else{
    printf("Invalid");
  }

  printf("Your bill is= %d", price);


}