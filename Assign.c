#include <stdio.h>

int main(){
  float r, h, acy, aco, vcy, vco, pi;

  printf("Enter r and h one by one--");
  scanf("%f %f", &r, &h);

  pi=3.14;
  acy=2*pi*r*r+2*pi*r*h;
  vcy=pi*r*r*h;

  aco=pi*r*r+pi*r*h;
  vco=(pi*r*r*h)/3;

  printf("\n Area of cylinder is %f", acy);
  printf("\n Volume of cylinder is %f", vcy);
  printf("\n Area of cone is %f", aco);
  printf("\n Volume of cone is %f", vco);

  return 0;

}