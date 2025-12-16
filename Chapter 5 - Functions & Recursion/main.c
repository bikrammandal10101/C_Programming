// Chapter 5 - Functions & Recursion ✅ 

// Function 
// block of code that performs particular task
// it can be used multiple times
// increase code reusability

// Syntax 1
// Function Prototype | Function Declaration
// return_type function_name(parameters);

// Syntax 2
// Function Definition
// return_type function_name(parameters) {
//     // code
// }

// Syntax 3
// Function Call
// function_name(parameters);

/*
#include <stdio.h>

// Function Declaration | Function Prototype
void printHello();

// Function Call | Function Invocation
int main() {
    printHello();
    printHello();
    printHello();

    return 0;
}

// Function Definition | Function Body
void printHello() {
    printf("Hello! \n");
    printf("My name is Bikram. \n");
}
*/


// Practice Question : 1 - Write 2 functions - one to print "Hello!" and second to print "Good Bye:)".
/*
#include <stdio.h>

void printHello();
void printGoodBye();

int main() {
    printHello();
    printGoodBye();

    return 0;
}

void printHello() {
    printf("Hello! \n");
}

void printGoodBye() {
    printf("Good Bye:) \n");
}
*/


// Practice Question : 2 - Write a function that prints Namaste if user is Indian & Bonjour if user is French.
/*
#include <stdio.h>

void printNamaste();
void printBonjour();

int main() {
    printf("Enter your nationality - Indan (I) or French (F) : \n");
    char nationality;
    scanf("%c", &nationality);

    if (nationality == 'I' || nationality == 'i') {
        printNamaste();
    } else if (nationality == 'F' || nationality == 'f') {
        printBonjour();
    } else {
        printf("Invalid nationality. \n");
    }

    return 0;
}

void printNamaste() {
    printf("Namaste! \n");
}

void printBonjour() {
    printf("Bonjour! \n");
}
*/


// Properties
// Execution always starts from main
// A function gets called directly or indirectly from main function
// There can be multiple functions in a program


// Function Types
// a. Library Functions
// b. User Defined Functions


// Passing Arguments
// functions can take value & give some value
// a. By Value
// b. By Reference


// Write a program to print the sum of 2 numbers.
/*
#include <stdio.h>

int sum(int a, int b);

int main() {
    int num1, num2;

    printf("Enter 1st number : ");
    scanf("%d", &num1);

    printf("Enter 2nd number : ");
    scanf("%d", &num2);

    printf("Sum of %d and %d is: %d. \n", num1, num2, sum(num1, num2));
}

int sum(int a, int b) {
    return a + b;
}
*/


// Write a program to print a table of a number.
/*
#include <stdio.h>

void printTable(int n);

int main() {
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printTable(num);

    return 0;
}

void printTable(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d \n", n, i, n * i);
    }
}
*/


// NOTE
// a. Function can only return one value at a time
// b. Changes to parameters in function don't change the values in calling function. | Because a copy of argument is passed to the function

/*
#include <stdio.h>

void calculatePrice(float value);

int main() {
    float value;

    printf("Enter the price : ");
    scanf("%f", &value);

    calculatePrice(value);

    printf("Price is: %f \n", value);

    return 0;
}

void calculatePrice(float value) {
    value = value + (0.18 * value);
    printf("Final price is: %f \n", value);
}
*/


// Practice Question : 1 - Use library function to calculate the square of a number given by user.
/*
#include <stdio.h>
#include <math.h>

int calculateSquare(int n);

int main() {
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Square of %d is: %d \n", num, calculateSquare(num));

    return 0;
}

int calculateSquare(int n) {
    int square = (int) pow(n, 2);
    return square;
}
*/


// Practice Question : 2 - Write functions to calculate area of a square, area of a circle & area of a rectangle.
/*
#include <stdio.h>
#include <math.h>

float calculateAreaOfSquare(float side);
float calculateAreaOfCircle(float radius);
float calculateAreaOfRectangle(float length, float breadth);

int main() {
    float side, radius, length, breadth;

    printf("Enter side of square : ");
    scanf("%f", &side);

    printf("Enter radius of circle : ");
    scanf("%f", &radius);

    printf("Enter length of rectangle : ");
    scanf("%f", &length);

    printf("Enter breadth of rectangle : ");
    scanf("%f", &breadth);

    printf("Area of square is: %f \n", calculateAreaOfSquare(side));
    printf("Area of circle is: %f \n", calculateAreaOfCircle(radius));
    printf("Area of rectangle is: %f \n", calculateAreaOfRectangle(length, breadth));

    return 0;
}

float calculateAreaOfSquare(float side) {
    return side * side;
}

float calculateAreaOfCircle(float radius) {
    return 3.14 * radius * radius;
}

float calculateAreaOfRectangle(float length, float breadth) {
    return length * breadth;
}
*/



// Recursion ✅ 
// When a function calls itself, it's called recursion

// Syntax
// function_name(parameters) {
//     // code
//     function_name(parameters);
// }


// Properties of Recursion
// a. Anything that can be done with Iteration, can be done with recursion and vice-versa.
// b. Recursion can sometimes give the most simple solution.
// c. Base Case is the condition which stops recursion.
// d. Iteration has infinite loop & Recursion has stack overflow.

// Example - Print "Hello World!" 5 times.
/*
#include <stdio.h>

void printHello(int count);

int main() {
    printHello(5);
    return 0;
}

void printHello(int count) {
    // Base Case
    if (count == 0) {
        return;
    }

    printf("Hello World! \n");
    printHello(count - 1);
}
*/


// Practice Question : 1 - Sum of first n natural numbers.
/*
#include <stdio.h>

int sum(int n);

int main() {
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Sum of first %d natural numbers is: %d \n", num, sum(num));

}

int sum(int n) {
    // Base Case
    if (n == 0) {
        return 0;
    }

    return n + sum(n - 1);
}
*/


// Practice Question : 2 - Write a function to calculate the factorial of a number.
/*
#include <stdio.h>

int calculateFactorial(int n);

int main() {
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Factorial of %d is: %d \n", num, calculateFactorial(num));

    return 0;
}

int calculateFactorial(int n) {
    // Base Case
    if (n == 0) {
        return 1;
    }

    return n * calculateFactorial(n - 1);
}
*/


// Practice Question : 3 - Write a function to calculate the sum of digits of a number.
/*
#include <stdio.h>

int calculateSumOfDigits(int n);

int main() {
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Sum of digits of %d is: %d \n", num, calculateSumOfDigits(num));

    return 0;
}

int calculateSumOfDigits(int n) {
    // Base Case
    if (n == 0) {
        return 0;
    }

    return n % 10 + calculateSumOfDigits(n / 10);
}
*/


// Practice Question : 4 - Write a function to convert celsius to fahrenheit.
/*
#include <stdio.h>

float calculateFahrenheit(float celsius);

int main() {
    float celsius;

    printf("Enter temperature in celsius : ");
    scanf("%f", &celsius);

    printf("Temperature in fahrenheit is: %f \n", calculateFahrenheit(celsius));

    return 0;
}

float calculateFahrenheit(float celsius) {
    // Base Case
    if (celsius == 0) {
        return 0;
    }

    return (celsius * 1.8) + 32;
}
*/


// Practice Question : 5 - Write a function to calculate Percentage of a student from marks in Science, Mathematics & English.
/*
#include <stdio.h>

float calculatePercentage(float science, float math, float english);

int main() {
    float science, math, english;

    printf("Enter marks in Science : ");
    scanf("%f", &science);

    printf("Enter marks in Mathematics : ");
    scanf("%f", &math);

    printf("Enter marks in English : ");
    scanf("%f", &english);

    printf("Percentage of student is: %f \n", calculatePercentage(science, math, english));

    return 0;
}

float calculatePercentage(float science, float math, float english) {
    return (science + math + english) / 3;
}
*/


// Practice Question : 6 - Write a function to print n terms of fibonacci series.
/*
#include <stdio.h>

int printFibonacci(int n);

int main() {
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Fibonacci series of %d terms is: \n", num);

    for (int i = 1; i <= num; i++) {
        printf("%d \t", printFibonacci(i));
    }

    return 0;
}

int printFibonacci(int n) {
    // Base Case
    if (n == 0 || n == 1) {
        return n;
    }

    return printFibonacci(n - 1) + printFibonacci(n - 2);
}
*/


// Practice Question : 7 - Write a function to find square root of a number.
/*
#include <stdio.h>
#include <math.h>

float calculateSquareRoot(float n);

int main() {
    float num;

    printf("Enter a number : ");
    scanf("%f", &num);

    printf("Square root of %f is: %f \n", num, calculateSquareRoot(num));

    return 0;
}

float calculateSquareRoot(float n) {
    // Base Case
    if (n == 0) {
        return 0;
    }

    return sqrt(n);
}
*/


// Practice Question : 8 - Write a function to print "Hot" or "Cold" based on temperature.
/*
#include <stdio.h>

void printTemperature(float temperature);

int main() {
    float temperature;

    printf("Enter temperature : ");
    scanf("%f", &temperature);

    printTemperature(temperature);

    return 0;
}

void printTemperature(float temperature) {
    if (temperature > 30) {
        printf("Hot \n");
    } else {
        printf("Cold \n");
    }
}
*/


// Practice Question : 9 - Make your own pow function.
/*
#include <stdio.h>

int calculatePower(int base, int exponent);

int main() {
    int base, exponent;

    printf("Enter base : ");
    scanf("%d", &base);

    printf("Enter exponent : ");
    scanf("%d", &exponent);

    printf("Power of %d raised to %d is: %d \n", base, exponent, calculatePower(base, exponent));

    return 0;
}

int calculatePower(int base, int exponent) {
    // Base Case
    if (exponent == 0) {
        return 1;
    }

    return base * calculatePower(base, exponent - 1);
}
*/

