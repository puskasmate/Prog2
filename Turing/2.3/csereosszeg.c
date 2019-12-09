#include <stdio.h>
#include <unistd.h>

int main(){

int a =10;
int b =5;

a=a+b;
b=a-b;
a=a-b;

printf("A változók felcserélve: %d, %d\n",a,b);

    return 0;
                }
