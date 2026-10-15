#include <stdio.h>

int main(){

  int Totaldays, months, days;

  printf("Enter total days:--");
  scanf("%d", &Totaldays);

  months=Totaldays/30;
  days=Totaldays%30;

  printf("Months is %d and days is %d",months, days);

  return 0;

}