// Chapter 3 - Conditional Statements ✅ 
// Types of conditional statements: if-else, else if, nested if-else, switch

// if-else Statement
/*
#include <stdio.h>

int main() {
    printf("Enter your age: ");
    int age;
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
*/


// else if Statement
/*
#include <stdio.h>

int main() {
    printf("Enter your age: ");
    int age;
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are adult.\n");
    } else if (age >= 13) {
        printf("You are a teenager.\n");
    } else {
        printf("You are a child.\n");
    }

    return 0;
}
*/

// Nested if-else Statement
/*
#include <stdio.h>

int main() {
    printf("Enter your age: ");
    int age;
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are adult.\n");
    } else {
        if (age >= 13) {
            printf("You are a teenager.\n");
        } else {
            printf("You are a child.\n");
        }
    }

    return 0;
}
*/


// Conditional Operators | Ternary Operator
// Condition ? doSomething if TRUE : doSomething if FALSE;
/*
#include <stdio.h>

int main() {
    printf("Enter your age: ");
    int age;
    scanf("%d", &age);

    printf("You are %s eligible to vote.\n", age >= 18 ? "eligible" : "not eligible");
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    printf("Enter your age: ");
    int age;
    scanf("%d", &age);

    age >= 18 ? printf("Adult \n") : printf("not Adult \n");

    return 0;
}
*/


// Switch Statement
// a. Cases can be in any order
// b. Nested switch (switch inside switch) are allowed
/*
#include <stdio.h>

int main() {
    printf("Enter you day (1-7): ");
    int day;
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid day");
    }

    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    printf("Enter you day: ");
    char day;
    scanf("%c", &day);

    switch (day) {
        case 'M':
        case 'm':
            printf("Monday");
            break;
        case 'T':
        case 't':
            printf("Tuesday");
            break;
        case 'W':
        case 'w':
            printf("Wednesday");
            break;
        case 'R':
        case 'r':
            printf("Thursday");
            break;
        case 'F':
        case 'f':
            printf("Friday");
            break;
        case 'S':
        case 's':
            printf("Saturday");
            break;
        case 'U':
        case 'u':
            printf("Sunday");
            break;
        default:
            printf("Invalid day");
    }

    return 0;
}
*/


// Practice Question : 1 - Write a program to check if a student pass or failed. | marks >= 33 is PASS | marks < 33 is FAIL
/*
#include <stdio.h>

int main() {
    printf("Enter your marks: ");
    int marks;
    scanf("%d", &marks);

    if (marks >= 33) {
        printf("You have passed the exam.\n");
    } else {
        printf("You have failed the exam.\n");
    }
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    printf("Enter your marks: ");
    int marks;
    scanf("%d", &marks);

    marks >= 33 ? printf("PASS \n") : printf("FAIL \n");
    return 0;
}
*/


// Practice Question : 2 - Write a program to give grade to a student. | marks >= 80 is A | marks >= 60 is B | marks >= 40 is C | marks < 40 is FAIL
/*
#include <stdio.h>

int main() {
    printf("Enter your marks: ");
    int marks;
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100) {
        printf("Your grade is A.\n");
    } else if (marks >= 60 && marks < 80) {
        printf("Your grade is B.\n");
    } else if (marks >= 40 && marks < 60) {
        printf("Your grade is C.\n");
    } else {
        printf("You have failed the exam.\n");
    }

    return 0;
}
*/


// Practice Question : 3 - will this code work?
/*
#include <stdio.h>

int main() {
    int x = 2;

    if (x = 1) {
        printf("x is equal to 1 \n");
    } else {
        printf("x is not equal to 1 \n");
    }

    return 0;
}
*/


// Practice Question : 4 - Write a program to find if a character enter by user is uppercase or not.
/*
#include <stdio.h>

int main() {
    printf("Enter a character: ");
    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is uppercase.\n");
    } else {
        printf("The character is not uppercase.\n");
    }

    return 0;
}
*/


// Practice Question : 4 - Write a program to find if a character enter by user is uppercase or lowercase.
/*
#include <stdio.h>

int main() {
    printf("Enter a character: ");
    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is uppercase.\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("The character is lowercase.\n");
    } else {
        printf("The character is neither uppercase nor lowercase.\n");
    }

    return 0;
}
*/


