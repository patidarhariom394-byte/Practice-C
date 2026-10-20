#include <stdio.h>
int main(){
  int i;
  int count=0;

  do{
    printf("Enter the number--");
    scanf("%d\n",&i);
    
    if(i!=0){
      printf("%d\n",i);
      count=count+1;
    }
  }while(i!=0);

printf("%d",count);

return 0;

}