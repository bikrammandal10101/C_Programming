// Chapter 4 - Loop Control Statements ✅ 
/*
#include <stdio.h>

int main() {
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    return 0;
}
*/


// Loop Control Instructions
// To repeat some parts of the program
// for, while, do-while

// for loop
/*
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("Hello World\n");
    }
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        printf("%d\n", i);
    }
    return 0;
}
*/


// Practice Question : 1 - Print the number from 0 to 10
/*
#include <stdio.h>

int main() {
    for (int i = 0; i <= 10; i++) {
        printf("%d\n", i);
    }
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    for (float i = 1.0; i <= 10.0; i++) {
        printf("%f\n", i);
    }
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    for (char i = 'A'; i <= 'Z'; i++) {
        printf("%c \t", i);
    }
    return 0;
}
*/


// while loop
/*
#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 5) {
        printf("Hello World\n", i);
        i++;
    }
    return 0;
}
*/

// Practice Question : 2 - Print the number from 0 to n, if n is given by the user
/*
#include <stdio.h>

int main() {
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);

    int i = 0;
    while (i <= n) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
*/


// do-while loop
/*
#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("Hello World\n", i);
        i++;
    } while (i <= 5);

    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    int i = 5;
    do {
        printf("%d\n", i);
        i--;
    } while (i >= 1);

    return 0;
}
*/


// Practice Question : 3 - Print the sum of first n natural numbers.
/*
#include <stdio.h>

int main() {
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);

    int sum = 0;
    int i = 1;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    
    while (i <= n) {
        sum += i;
        i++;
    }

    do {
        sum += i;
        i++;
    } while (i <= n);

    printf("The sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}
*/

// Also, print them in reverse.
/*
#include <stdio.h>

int main() {
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);

    int sum = 0;
    int i = n;

    for (int i = n; i >= 1; i--) {
        sum += i;
    }
    
    while (i >= 1) {
        sum += i;
        i--;
    }

    do {
        sum += i;
        i--;
    } while (i >= 1);

    printf("The sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}
*/


// Practice Question : 4 - Print the table of a number input by the user.
/*
#include <stdio.h>

int main() {
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
*/


// Break and Continue
// break - break the loop
// continue - skip the current iteration

/*
#include <stdio.h>

int main() {
    for (int  i = 0; i <= 5; i++) {
        if (i == 3) {
            break;
        }
        printf("%d\n", i);
    }
    
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    for (int i = 0; i <= 5; i++) {
        if (i == 3) {
            continue;
        }
        printf("%d\n", i);
    }
    
    return 0;
}
*/


// Practice Question : 5 - Keep taking input from the user until the user enters an odd number.
/*
#include <stdio.h>

int main() {
    int n;

    do {
        printf("Enter the value of n: ");
        scanf("%d", &n);
    } while (n % 2 == 0);
    
    return 0;
}
*/


// Practice Question : 6 - Keep taking input from the user until the user enters a number which is multiple of 7.
/*
#include <stdio.h>

int main() {
    int n;

    do {
        printf("Enter the value of n: ");
        scanf("%d", &n);
    } while (n % 7 != 0);
    
    return 0;
}
*/


// Practice Question : 7 - Print all the odd numbers from 5 to 50.
/*
#include <stdio.h>

int main() {
    for (int i = 5; i <= 50; i += 2) {
        printf("%d\n", i);
    }
    
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    for (int i = 5; i <= 50; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
*/


// Practice Question : 8 - Print the factorial of a number n.
/*
#include <stdio.h>

int main() {
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("The factorial of %d is: %d\n", n, fact);
    
    return 0;
}
*/


// Practice Question : 9 - Print reverse of the table for a number n.
/*
#include <stdio.h>

int main() {
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);

    for (int i = 10; i >= 1; i--) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    
    return 0;
}
*/


// Practice Question : 10 - Calculate the sum of all numbers between 5 to 50. (Including 5 and 50)
/*
#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 5; i <= 50; i++) {
        sum += i;
    }

    printf("The sum of all numbers between 5 to 50 is: %d\n", sum);
    
    return 0;
}
*/


// Practice Question : 11 - Print this pattern:     | Nested Loops 
/*
    * * * * *
    * * * * *
    * * * * *
    * * * * *
*/

/*
#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
*/


// Practice Question : 12 - Write a program to check if a number is prime or not.
/*
#include <stdio.h>

int main() {
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);

    int flag = 0;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        printf("%d is not a prime number\n", n);
    } else {
        printf("%d is a prime number\n", n);
    }
    
    return 0;
}
*/


// Practice Question : 13 - Write a program to print prime numbers in a range.
/*
#include <stdio.h>

int main() {
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        int flag = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
*/

