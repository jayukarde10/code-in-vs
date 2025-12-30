#include<stdio.h>
#include<string.h>
int sum(int a,int b){//a,b is parameter//actual parameter
  
  return a+b ;
}
int main(){
  int x,y;
  scanf("%d %d",&x,&y);
  int s=sum(x,y);  // where x,y is actual parameter //also known as argument
   printf("%d",s);
 return 0;
}
