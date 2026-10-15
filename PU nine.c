#include <stdio.h>

int main(){

  int Rupees, paise;
  float price;

  printf("Enter Value--");
  scanf("%f", &price);

  Rupees = price;
  paise = (price-Rupees)*100;

  printf("%d Rupees and %d Paise", Rupees, paise);

  return 0;




}