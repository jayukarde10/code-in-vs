// printf("%d",a) 
// for int %d
//for float %f
//for char first alfabet only %c,whole text %s
// with space to get all 
//char name[50];
//fgets(name, 50, stdin);

//a=a+b; // a+=b
//a=a-b; // a-=b    
//a=a*b; // a*=b
//a=a/b; // a/=b    
//a=a%b; // a%=b

//increment ++
//i++ use and then increment
//++i increment and then use
//decrement --
//i-- use and then decrement
//--i decrement and then use


//&& and
//  || or

//all character has ASCII no A=65 ,a=97
//for( i='A';i<='Z';i++){
//    printf("%c ",i);//print all alphabets
//} 




//if else syntax
// if (condition1) {
//     // block 1  we can use break here to exit and continue to skip rest of the code
// } else if (condition2) {
//     // block 2
// } else {
//     // default block
// }


//Numbers → ==  //%d
// Characters → ==//%c
// Strings → strcmp()//%s // use to compare in if(compare)

// short cut ternary syntax
//condition ? expression_if_true : expression_if_false;


//switch syntax
// switch (expression) {
//     case value1:
//         // statements
//         break;

//     case value2:
//         // statements
//         break;

//     default:
//         // statements
// }

//example
// #include <stdio.h>

// int main() {
//     int day;

//     printf("Enter day number (1-7): ");
//     scanf("%d", &day);

//     switch (day) {
//         case 1:
//             printf("Monday");
//             break;
//         case 2:
//             printf("Tuesday");
//             break;
//         case 3:
//             printf("Wednesday");
//             break;
//         case 4:
//             printf("Thursday");
//             break;
//         case 5:
//             printf("Friday");
//             break;
//         default:
//             printf("Invalid day");
//     }

//     return 0;
// }



//for loop
// for (initialization; condition; increment/decrement) {
//     // loop body
// }
// example
//int main(){
//   int d=0;for (int i = 5;i<=50; i++){
    // sum =sum + i // important 
//     ; printf("%d\n", sum);}return 0;
// } it prints sum of numbers from 5 to 50


//while loop
// int i = 1;

// while (i <= 5) {
//     printf("%d\n", i);
//     i++;
// }

//do while loop
// do {
//     // loop body
// } while (condition);

// while loop	do–while loop
// Entry-controlled	Exit-controlled
// Condition checked first	Condition checked after loop
// May run zero times	Runs at least once



//function syntax
// return_type function_name(parameter1_type parameter1, parameter2_type parameter2) {
//     // function body     
//     return return_value;
// }   

// calling function
// function_name(argument1, argument2);


//example
// void greet(char name[]) {
//     printf("Hello, %s!\n", name);
// }

//example 
// #include<stdio.h>
// void greet(char name[]){
//     printf("hello %s",name);
//   }

// int main(){
//     char name[50];
//     printf("Enter your name: ");
//     fgets(name, sizeof(name), stdin);
//     greet(name);
//     return 0;
// }


//if (strcmp(id, "indian") == 0) {
    //     printf("Namaste");
    // }  //strcmp use to compare i  if statement


// parameter and argument in the function
//#include<stdio.h>
// int sum(int a,int b){//a,b is parameter//actual parameter
  
//   return a+b ;
// }
// int main(){
//   int x,y;
//   scanf("%d %d",&x,&y);
//   int s=sum(x,y);  // where x,y is actual parameter //also known as argument
//    printf("%d",s);
//  return 0;
// }


// we can call function in int main() but not use it after function end 