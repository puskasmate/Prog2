#include <stdio.h>

int main(void){

  int a = 5;
  int b = 0;
  
  while (a != 0){
        a=a<<1;
        b++;
  }
  
  printf ("A szóhossz ezen a gépen: %d bites\n", b);
  return 0;
}
