#include<stdio.h>
#include<string.h>
void namaste(){
  printf("namaste\n");
}
void france(){
  printf("bonguer\n");
}
int main(){
  char a[50];
  printf("enter nationality like india,france : \n");
  scanf("%s",&a);
  if( strcmp(a,"india")== 0){
    namaste();
  }else if(strcmp(a,"france")==0) {
    france();
  }else{
    printf("hello");
  }
 return 0;
}