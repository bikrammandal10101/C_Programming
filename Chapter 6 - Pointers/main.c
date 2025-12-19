// Chapter 6 - Pointers ✅ 
// Pointers
// A variable that stores the memory address of another variable is called a pointer.

// Syntax
// Type *variable_name;

// Example
/*
#include <stdio.h>

int main() {
    int age = 24;
    int *ptr = &age;
    int _age = *ptr;

    // printf("age = %d\n", age);
    // printf("ptr = %p\n", ptr);
    // printf("ptr = %u\n", ptr);
    // printf("_age = %d\n", _age);


    // printf("%p\n", &age);
    // printf("%p\n", ptr);
    // printf("%p\n", &ptr);

    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%u\n", &ptr);

    return 0;
}
*/


// Declaring Pointers
// int *ptr;
// char *ptr;
// float *ptr;


// Format Specifier
// printf("%p", &age);
// printf("%p", ptr);
// printf("%p", &ptr);

/*
#include <stdio.h>

int main() {
    int age = 24;
    int *ptr = &age;
    int _age = *ptr;

    printf("%u\n", age);
    printf("%u\n", *ptr);
    printf("%u\n", *(&age));

    return 0;
}
*/


// Practice Question - 1
/*
#include <stdio.h>

int main() {
    int *ptr;
    int x;

    ptr = &x;

    *ptr = 0;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr += 5;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    (*ptr)++;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    return 0;
}
*/


// Pointer to Pointer
// A variable that stores the memory address of another pointer is called a pointer to pointer.

// Syntax
// Type **variable_name;

// int **pptr;
// char **pptr;
// float **pptr;

/*
#include <stdio.h>

int main() {
    float num = 100.00;
    float *ptr = &num;
    float **pptr = &ptr;

    printf("%f\n", num);
    printf("%f\n", *ptr);
    printf("%f\n", **pptr);

    return 0;
}
*/


// Practice Question : 2 - Print the value of 'i' from its pointer to pointer.
/*
#include <stdio.h>

int main() {
    int i = 10;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("The value of 'i' is: %d\n", **pptr);

    return 0;
}
*/



// Pointers in Function Call 
// a. Call by Value - We pass value of variable as argument
// b. Call by Reference - We pass address of variable as argument
/*
#include <stdio.h>

void square(int n);
void _square(int *n);

int main() {
    int num = 5;

    // Call by Value
    square(num);
    printf("Number = %d\n", num);

    // Call by Reference
    _square(&num);
    printf("Number = %d\n", num);

    return 0;
}

// Call by Value
void square (int n) {
    n = n * n;
    printf("Square = %d\n", n);
}

// Call by Reference
void _square (int *n) {
    *n = *n * *n;
    printf("Square = %d\n", *n);
}
*/


// Practice Question : 3 - Swap 2 numbers, a & b
/*
#include <stdio.h>

void swap (int a, int b);
void _swap (int *a, int *b);

int main() {
    int a = 10;
    int b = 20;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Call by Value
    swap(a, b);

    // Call by Reference
    _swap(&a, &b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

// Call by Value
void swap (int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Call by Reference
void _swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
*/


// Practice Question : 4 - Will the address output be the same? 
// Ans: No - The address output will be different 
// But when cal by reference, the address output will be the same
/*
#include <stdio.h>

int printAddress(int n);
int _printAddress(int *n);

int main() {
    int n = 10;
    printf("%u\n", &n);

    // Call by Value
    // printAddress(n);

    // Call by Reference
    _printAddress(&n);

    return 0;
}

// Call by Value
int printAddress(int n) {
    printf("%u\n", &n);
    return 0;
}

// Call by Reference
int _printAddress(int *n) {
    printf("%u\n", n);
    return 0;
}
*/


// Practice Question : 5 - Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main function.
/*
#include <stdio.h>

void calculateSum(int a, int b, int *sum, int *product, float *average);

int main() {
    int a = 10;
    int b = 20;

    int sum, product;
    float average;

    calculateSum(a, b, &sum, &product, &average);

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);
    printf("Average = %f\n", average);

    return 0;
}

void calculateSum(int a, int b, int *sum, int *product, float *average) {
    *sum = a + b;
    *product = a * b;
    *average = (*sum) / 2;
}
*/


// Practice Question : 6 - Write a program in c to find the maximum number between two numbers using a pointer.
/*
#include <stdio.h>

int findMax(int a, int b, int *max);

int main() {
    int a = 10;
    int b = 20;

    int max;
    findMax(a, b, &max);

    printf("Max = %d\n", max);

    return 0;
}

int findMax(int a, int b, int *max) {
    if (a > b) {
        *max = a;
    } else {
        *max = b;
    }
}
*/


// Practice Question : 7 - Write a program in c to print the elements of an array in reverse order.
/*
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 4; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
*/


// Practice Question : 8 - Write a program in C to print all the letters in english alphabet using a pointer.
/*
#include <stdio.h>

void printAlphabet(char *start, char *end);

int main() {
    char start = 'a';
    char end = 'z';

    printAlphabet(&start, &end);

    return 0;
}

void printAlphabet(char *start, char *end) {
    for (char i = *start; i <= *end; i++) {
        printf("%c\t", i);
    }
}
*/

