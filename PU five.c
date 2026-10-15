#include <stdio.h>

int main(){

int number, a, b, c, sum;

printf("Enter 3 digit no.");
scanf("%d", &number);

a = number%10;
number=number/10;
b = number%10;
number = number/10;
c = number;

sum = a+b+c;

printf("Sum is--%d", sum);

return 0;

}