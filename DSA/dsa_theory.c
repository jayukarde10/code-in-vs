//pointer
// A pointer is a variable that stores the memory address of another variable.
// Syntax to declare a pointer:
// data_type *pointer_name;
// Example:
// int a = 10;  
// int *p = &a; // p now holds the address of a
// To access the value at the address stored in a pointer, we use the dereference operator (*):
// int value = *p; // value will be 10

//%p is used to print pointer addresses in C.


// #include<stdio.h>
// int main(){
//    int a = 10;
//    int *p = &a; // pointer p holds the address of a
//    int value = *p; // dereferencing p to get the value of a
//    printf("Value of a: %d\n", a);          // prints 10
//    printf("Address of a: %p\n", &a);       // prints address of a
//    printf("Value of p (address of a): %p\n", p); // prints address of a
//    printf("Value at address stored in p: %d\n", *p); // prints 10
//    printf("Value obtained by dereferencing p: %d\n", value); // prints 10
//    return 0;
// } //* store the value


// pointer of pointer
// #include<stdio.h>
// int main(){
//    int age =10;
//    int*p =&age;
//    int**ptr=&p;
   
//    printf("%p \n",&age);
//    printf("%p\n",p);
//    printf("%p\n",ptr);

//   return 0;

// }