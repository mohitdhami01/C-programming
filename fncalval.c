#include<stdio.h>
void change(int num){
    printf("Before adding value inside to num=%d\n",num);
    num=num+100;
    printf("after adding value inside to num=%d\n",num);
}
int main(){
    int x=50;
    printf("Before function call x=%d\n",x);
    change(x);//passing value in function
    printf("After function call x=%d\n",x);
    return 0;
}