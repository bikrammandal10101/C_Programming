// Chapter 1 - Variables, Data Types + Input/Output ✅ 
// Program Structure
/*
#include <stdio.h>
// this is a comment in C
int main() {
    printf("Hello World!");
    return 0;
}
*/

// Variables
// Variable is the name of a memory location which stores some data.
/*
#include <stdio.h>

int main() {
    int number = 25;
    char star = '*';
    int age = 23;
    float pi = 3.14;

    return 0;
}
*/

// Variables Rules
// a. Variables are case sensitive
// b. 1st character is alphabet or '_'
// c. no comma/blank space
// d. No other symbol other than '_'
/*
#include <stdio.h>

int main() {
    int a = 20;
    int A = 40;

    int _age = 24;

    int $age = 24;

    int final_price = 200;

    return 0;
}
*/

// Variables Data Types
// a. int   - 1 byte
// b. float - 4 bytes
// c. char  - 1 byte
// d. double - 8 bytes


// Constant
// a. constant is a variable whose value is fixed
// b. constant is declared using #define keyword

// Integer Constant - 1, 2, 3, 4, 5, 6, 7, 8, 9
// Character Constant - 'a', 'b', 'c', 'd', '#', '$'
// Float Constant - 1.0, 2.0, 3.0, 4.0, 5.0

/*
#include <stdio.h>

int main() {
    #define PI 3.14
    return 0;
}
*/


// Keywords
// Reserved words that have special meaning to the compiler
// 32 keywords in C

// a. auto    - 1
// b. break   - 2
// c. case    - 3
// d. char    - 4
// e. const   - 5
// f. continue - 6
// g. default - 7
// h. do      - 8
// i. double  - 9
// j. else    - 10
// k. enum    - 11
// l. extern  - 12
// m. float   - 13
// n. for     - 14
// o. goto    - 15
// p. if      - 16
// q. int     - 17
// r. long    - 18
// s. register - 19
// t. return  - 20
// u. short   - 21
// v. signed  - 22
// w. sizeof  - 23
// x. static  - 24
// y. struct  - 25
// z. switch  - 26
// aa. typedef - 27 
// ab. union   - 28
// ac. unsigned - 29
// ad. void    - 30
// ae. volatile - 31
// af. while   - 32


// Input/Output
// a. printf
// b. scanf
/*
#include <stdio.h>

int main() {
    printf("Hello World! \n");
    printf("Hello World! \n");
    printf("Hello World! \n");
    printf("Hello World! \n");
    return 0;
}
*/

// Output
/*
#include <stdio.h>

int main() {
    // Integer
    int age = 23;
    printf("my age is: %d \n", age);
    // Float
    float pi = 3.14;
    printf("pi is: %f \n", pi);
    // Character
    char star = '*';
    printf("star is: %c \n", star);

    return 0;
}
*/

// Input / Output
/*
#include <stdio.h>

int main() {
    printf("enter your age: ");
    int age;
    scanf("%d", &age);

    printf("your age is: %d", age);
    return 0;
}
*/


// Practice Question : 1 - Sum of two numbers using Input/Output
/*
#include <stdio.h>

int main() {
    printf("enter first number: ");
    int num1;
    scanf("%d", &num1);

    printf("enter second number: ");
    int num2;
    scanf("%d", &num2);

    int sum = num1 + num2;
    printf("sum is: %d", sum);
    return 0;
}
*/


// Compilation Process
// 1. Preprocessing
// 2. Compilation
// 3. Linking
// 4. Execution
// A computer program that translates C code into machine code


// Practice Question : 2 - Write a program to calculate the area of a square.
/*
#include <stdio.h>

int main() {
    printf("enter side of square: ");
    float side;
    scanf("%f", &side);

    float area = side * side;
    printf("area of square is: %f", area);
    return 0;
}
*/


// Practice Question : 3 - Write a program to calculate the area of a circle.
/*
#include <stdio.h>

int main() {
    printf("enter radius of circle: ");
    float radius;
    scanf("%f", &radius);

    float area = 3.14 * radius * radius;
    printf("area of circle is: %f", area);
    return 0;
}
*/


// Practice Question : 4 - Write a program to calculate the area of a rectangle.
/*
#include <stdio.h>

int main() {
    printf("enter length of rectangle: ");
    float length;
    scanf("%f", &length);

    printf("enter width of rectangle: ");
    float width;
    scanf("%f", &width);

    float area = length * width;
    printf("area of rectangle is: %f", area);
    return 0;
}
*/


// Practice Question : 5 - Write a program to calculate the area of a triangle.
/*
#include <stdio.h>

int main() {
    printf("enter base of triangle: ");
    float base;
    scanf("%f", &base);

    printf("enter height of triangle: ");
    float height;
    scanf("%f", &height);

    float area = 0.5 * base * height;
    printf("area of triangle is: %f", area);
    return 0;
}
*/


