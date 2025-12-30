#include<stdio.h>
int fact(int n){
  if(n==0||n==1){
    return 1;
}else{
  return n*fact(n-1);

}}
int sos(int n){
  if(n==0){
    return 0;
  }else{
    return n+sos(n-1);
  }
} 
int main(){
  int n;
  scanf("%d",&n);
  printf("factorial is %d",fact(n));
  printf("\nsum of series is %d",sos(n));

  return 0;
}