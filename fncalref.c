#include<stdio.h>
void change(int num){
    printf("Before the value inside num=%d\n",num);
    num=num+100;
    printf("After the value inside num=%d\n",num);
}
int main(){
    int x=1000;
    printf("Before the function x=%d\n",x);
    change(&x);//passing the function
    printf("After the function x=%d\n",x);
    return 0;
}