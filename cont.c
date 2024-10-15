#include<stdio.h>
int main()
{
    int i=0;
    do {
       printf("Hello World!\n");
       i=i+1;
       if(i==3){
           break;
       }
    }
    while (i<5);
}