#include <stdio.h>

enum week {sunday, monday, tuesday, wednesday, thursday,friday, saturday};

int main(){
  enum week today;
  today=friday;

  printf("Value of the friday is= %d\n", today);

  return 0;
}