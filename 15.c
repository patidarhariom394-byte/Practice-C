#include <stdio.h>
int main(){
  int day;

  printf("ENter the day");
  scanf("%d", &day);

  switch(day){

    case 1:
    printf("Monday");

    case 2:
    printf("Tuesday");
    break;

    case 3:
    printf("Wednesday");
    break;

    default:
    printf("Invalid day");
  }

  return 0;
}