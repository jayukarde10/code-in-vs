#include<stdio.h>
int main(){
   int age =10;
   int*p =&age;
   int**ptr=&p;
   
   printf("%p \n",&age);
   printf("%p\n",p);
   printf("%p\n",ptr);

  return 0;

}