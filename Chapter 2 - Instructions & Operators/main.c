// Chapter 2 - Instructions & Operators ✅ 

// Instructions
// These are statements in a Program that tell the computer what to do.

// Types of Instructions
// 1. Type Declaration Instructions
// 2. Arithmetic Instructions
// 3. Control Instructions

// 1. Type Declaration Instructions - Declare variable before using it.
// Valid Type Declarations
/*
#include <stdio.h>

int main() {
    int a = 23;
    int b = a + 1;
    int c = b * 2;
    int d = 1, e;

    int x, y, z;
    x = y = z = 2;

    return 0;
}
*/

// Invalid Type Declarations
/*
#include <stdio.h>

int main() {
    int age = 23;
    int newAge = age + year;
    int year = 2;

    int x, y, z = 2;
    int x = y = z = 2;

    return 0;
}
*/

// 2. Arithmetic Instructions - Arithmetic Operators are used to perform mathematical operations on variables.
/*
#include <stdio.h>
#include <math.h>

int main() {
    int a = 6;
    int b = 4;

    printf("addition: %d\n", a + b);
    printf("subtraction: %d\n", a - b);
    printf("multiplication: %d\n", a * b);
    printf("division: %d\n", a / b);
    printf("modulus: %d\n", a % b);     // The remainder does't work with float values

    printf("exponential: %d\n", pow(a, b));
    printf("square root: %d\n", sqrt(a));

    return 0;
}
*/

// Type Conversion
// int op int -> int
// int op float -> float
// float op int -> float
// float op float -> float

// implicit type conversion
/*
#include <stdio.h>

int main() {
    int a = 6;
    float b = 4.6;

    printf("%f", a + b);

    return 0;
}
*/

// explicit type conversion
/*
#include <stdio.h>

int main() {
    int a = (int) 1.999999;

    printf("%d", a);

    return 0;
}
*/

// Operators Precedence
// 1. ()
// 2. ** (exponential)
// 3. * / % (multiplication, division, modulus)
// 4. + - (addition, subtraction)

// Operator Associativity
// 1. Left to Right
// 2. Right to Left

/*
#include <stdio.h>

int main() {
    int a  = 4 + 9 * 10;
    printf("%d \n", a);

    int b = 4 * 3 / 6 * 2;
    printf("%d \n", b);

    return 0;
}
*/

// Practice
/*
#include <stdio.h>

int main()
{
    int a = 5 * 2 - 2 * 3;
    printf("%d \n", a);

    int b = 5 * 2 / 2 * 3;
    printf("%d \n", b);

    int c = 5 * (2 / 2) * 3;
    printf("%d \n", c);

    int d = 5 + 2 / 2 * 3;
    printf("%d \n", d);

    return 0;
}
*/


// 3. Control Instructions - Control Instructions are used to control the flow of a Program.
// a. Sequence Control
// b. Decision Control
// c. Loop Control
// d. Case Control


// Operators
// a. Arithmetic Operators
// b. Relational Operators
// c. Logical Operators
// d. Bitwise Operators
// e. Assignment Operators
// f. Ternary Operators

// a. Arithmetic Operators
// 1. + (addition)
// 2. - (subtraction)
// 3. * (multiplication)
// 4. / (division)
// 5. % (modulus)
// 6. ++ (increment)
// 7. -- (decrement)

/*
#include <stdio.h>

int main() {
    int a = 6;
    int b = 4;

    printf("addition: %d\n", a + b);
    printf("subtraction: %d\n", a - b);
    printf("multiplication: %d\n", a * b);
    printf("division: %d\n", a / b);
    printf("modulus: %d\n", a % b);     // The remainder does't work with float values

    return 0;
}
*/

// Pre and Post Increment/Decrement Operators
/*
#include <stdio.h>

int main() {
    // Increment
    int a = 6;
    printf("%d \n", a++);
    printf("%d \n", a);

    int b = 6;
    printf("%d \n", ++b);
    printf("%d \n", b);

    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    // Decrement
    int a = 6;
    printf("%d \n", a--);
    printf("%d \n", a);

    int b = 6;
    printf("%d \n", --b);
    printf("%d \n", b);

    return 0;
}
*/

// b. Relational Operators
// 1. == (equal to)
// 2. != (not equal to)
// 3. > (greater than)
// 4. < (less than)
// 5. >= (greater than or equal to)
// 6. <= (less than or equal to)

/*
#include <stdio.h>

int main() {
    int a = 6;
    int b = 4;

    printf("equal to: %d\n", a == b);
    printf("not equal to: %d\n", a != b);
    printf("greater than: %d\n", a > b);
    printf("less than: %d\n", a < b);
    printf("greater than or equal to: %d\n", a >= b);
    printf("less than or equal to: %d\n", a <= b);

    return 0;
}
*/

// c. Logical Operators
// 1. && (and)
// 2. || (or)
// 3. ! (not)

/*
#include <stdio.h>

int main() {
    int a = 6;
    int b = 4;

    printf("and: %d\n", (a == b) && (a > b));
    printf("or: %d\n", (a == b) || (a > b));
    printf("not: %d\n", !(a == b));

    return 0;
}
*/

// d. Bitwise Operators | Only works with integers (0 and 1) | Next Chapter 
// 1. & (bitwise and)
// 2. | (bitwise or)
// 3. ^ (bitwise xor)
// 4. ~ (bitwise not)
// 5. << (left shift)
// 6. >> (right shift)

// e. Assignment Operators
// 1. = (assignment)
// 2. += (addition assignment)
// 3. -= (subtraction assignment)
// 4. *= (multiplication assignment)
// 5. /= (division assignment)
// 6. %= (modulus assignment)
// 7. &= (bitwise and assignment)
// 8. |= (bitwise or assignment)
// 9. ^= (bitwise xor assignment)
// 10. <<= (left shift assignment)
// 11. >>= (right shift assignment)

/*
#include <stdio.h>

int main() {
    int a = 6;
    int b = 4;

    printf("assignment: %d\n", a = b);
    printf("addition assignment: %d\n", a += b);
    printf("subtraction assignment: %d\n", a -= b);
    printf("multiplication assignment: %d\n", a *= b);
    printf("division assignment: %d\n", a /= b);
    printf("modulus assignment: %d\n", a %= b);
    printf("bitwise and assignment: %d\n", a &= b);
    printf("bitwise or assignment: %d\n", a |= b);
    printf("bitwise xor assignment: %d\n", a ^= b);
    printf("left shift assignment: %d\n", a <<= b);
    printf("right shift assignment: %d\n", a >>= b);

    return 0;
}
*/

// f. Ternary Operators | Next Chapter
// 1. ?: (conditional operator)


// Operator Precedence
// 1. ()
// 2. ** (exponential)
// 3. * / % (multiplication, division, modulus)
// 4. + - (addition, subtraction)
// 5. < > <= >= == != (relational)
// 6. && || (logical)
// 7. = += -= *= /= %= &= |= ^= <<= >>= (assignment, bitwise)



// Practice Question : 1 - Write a program to check if a number is divisible by 2 or not.
/*
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);

    printf("%d \n", a % 2 == 0);

    return 0;
}
*/


// Practice Question : 2 - Write a program to check if a number is even or odd.
/*
#include <stdio.h>

int main() {
    // even - 1
    // odd - 0

    printf("Enter a number: ");
    int a;
    scanf("%d", &a);

    printf("%d \n", a % 2 == 0);

    return 0;
}
*/


// Practice Question : 3 - Write a program to check if a number is positive or negative.
/*
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);

    printf("%d \n", a > 0);

    return 0;
}
*/


// Practice Question : 4 - Write a program to check if a number is divisible by 3 or not.
/*
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);

    printf("%d \n", a % 3 == 0);

    return 0;
}
*/


// Practice Question : 5 - if a number is greater than 9 & less than 100 then print true else print false. (2 digits number)
/*
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);

    printf("%d \n", (a > 9) && (a < 100));

    return 0;
}
*/


// Practice Question : 6 - Write a program to print the average of 3 numbers.
/*
#include <stdio.h>

int main() {
    printf("Enter 1st Number: ");
    int a;
    scanf("%d", &a);

    printf("Enter 2nd Number: ");
    int b;
    scanf("%d", &b);

    printf("Enter 3rd Number: ");
    int c;
    scanf("%d", &c);

    printf("%d \n", (a + b + c) / 3);

    return 0;
}
*/


// Practice Question : 7 - Write a program to check if given character is digit or not.
/*
#include <stdio.h>

int main() {
    printf("Enter a character: ");
    char a;
    scanf("%c", &a);

    printf("%d \n", (a >= '0') && (a <= '9'));

    return 0;
}
*/


// Practice Question : 8 - Write a program to check if given character is vowel or not.
/*
#include <stdio.h>

int main() {
    printf("Enter a character: ");
    char a;
    scanf("%c", &a);

    printf("%d \n", (a == 'a') || (a == 'e') || (a == 'i') || (a == 'o') || (a == 'u'));

    return 0;
}
*/


// Practice Question : 9 - Write a program to print the smallest number from 3 numbers.
/*
#include <stdio.h>

int main() {
    printf("Enter 1st Number: ");
    int a;
    scanf("%d", &a);

    printf("Enter 2nd Number: ");
    int b;
    scanf("%d", &b);

    printf("Enter 3rd Number: ");
    int c;
    scanf("%d", &c);

    printf("%d \n", (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c));

    return 0;
}
*/
