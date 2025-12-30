#include<stdio.h>
int factorial(int n){
  if(n==0 || n==1){
    return 1;
  }else{
    return n*factorial(n-1);// 5*factorial(4)//
  }//recursion function
}
int main(){
  int n;
  printf("enter n:");
  scanf("%d",&n);
  int fact=factorial(n);
  printf("factorial of %d is %d",n,fact); 

  return 0;
}