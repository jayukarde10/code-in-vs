#include<stdio.h>

int main(){
    int r;
    printf("enter a radius");
    scanf("%d",&r);
    // if (r>30){
    //     printf("pass");
    // } else if (r<=30){
    //     printf("fail");
    // }else if (r>100){
    //     printf("masti nahi");
    // }
    r>=30 ? printf("pass \n"):printf("fail \n");
    return 0;


}