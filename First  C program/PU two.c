 #include <stdio.h>

 int main() {

  int a, b, sum, substraction, Multiplication, Division, Modulo;

  printf("Welcome to the calculator");

  printf("Enter first number:--");
  scanf("%d", &a);

  printf("Enter the second number:--");
  scanf("%d", &b);

  sum=a+b;
  substraction=a-b;
  Multiplication=a*b;
  Division=a/b;
  Modulo=a%b;

  printf("Sum is--%d", sum);
  printf("substraction is--%d", substraction);
  printf("Multiplication is--%d", Multiplication);
  printf("division is--%d", Division);
  printf("Modulo is--%d", Modulo);

  return 0;



 }