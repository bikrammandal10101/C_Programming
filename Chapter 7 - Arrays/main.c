// Chapter 7 - Arrays ✅ 

// Arrays
// Collection of similar data types stored at contiguous memory locations.

// Syntax
// data_type array_name[size];
/*
#include <stdio.h>

int main() {
    int marks[3];

    printf("Enter phy marks: ");
    scanf("%d", &marks[0]);

    printf("Enter chem marks: ");
    scanf("%d", &marks[1]);

    printf("Enter math marks: ");
    scanf("%d", &marks[2]);

    printf("Physics: %d Chemistry: %d Maths: %d ", marks[0], marks[1], marks[2]);

    return 0;
}
*/


// Practical Question : 1 - Write a program to enter price of 3 items & print their final cost with gst of 18%.
/*
#include <stdio.h>

int main() {
    float price[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter price of item %d: ", i + 1);
        scanf("%f", &price[i]);
    }

    for (int i = 0; i < 3; i++) {
        price[i] = price[i] * 1.18;
    }

    for (int i = 0; i < 3; i++) {
        printf("Final cost of item %d: %.2f\n", i + 1, price[i]);
    }

    return 0;
}
*/


// Pointer Arithmetic 
// Pointer can be incremented & decremented.

// Case 1
/*
#include <stdio.h>

int main() {
    int age = 24; 
    int *ptr = &age;

    printf("ptr: %u\n", ptr);
    ptr++;
    printf("ptr: %u\n", ptr);
    ptr--;
    printf("ptr: %u\n", ptr);    

    return 0;
}
*/

// Case 2
/*
#include <stdio.h>

int main() {
    float price = 20.00;
    float *ptr = &price;

    printf("ptr: %u\n", ptr);
    ptr++;
    printf("ptr: %u\n", ptr);
    ptr--;
    printf("ptr: %u\n", ptr);    

    return 0;
}
*/

// Case 3
/*
#include <stdio.h>

int main() {
    char star = '*';
    char *ptr = &star;

    printf("ptr: %u\n", ptr);
    ptr++;
    printf("ptr: %u\n", ptr);
    ptr--;
    printf("ptr: %u\n", ptr);    

    return 0;
}
*/


// We can also subtract one pointer from another
// We can also compare 2 pointers
/*
#include <stdio.h>

int main() {
    int age1 = 24;
    int *ptr1 = &age1;

    int age2 = 25;
    int *ptr2 = &age2;

    printf("ptr1: %u\n", ptr1);
    printf("ptr2: %u\n", ptr2);
    printf("ptr1 - ptr2: %d\n", ptr1 - ptr2);
    printf("ptr1 == ptr2: %d\n", ptr1 == ptr2);

    return 0;
}
*/


// Array is a Pointer
// int *ptr = &marks[0];   ||    int *ptr = marks;    // Both are same

// Traverse an Array
/*
#include <stdio.h>

int main() {
    int aadhar[5];

    // input
    int *ptr = &aadhar[0];
    for (int i = 0; i < 5; i++) {
        printf("Enter aadhar number %d: ", i);
        scanf("%d", &aadhar[i]);
    }

    // output
    for (int i = 0; i < 5; i++) {
        printf("Aadhar number %d: %d\n", i, aadhar[i]);
    }

    return 0;
}
*/


// Arrays as Function Argument
/*
#include <stdio.h>

void printNumbers(int arr[], int size);
void _printNumbers(int *arr, int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    printNumbers(arr, 5);
    _printNumbers(arr, 7);

    return 0;
}

void printNumbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

void _printNumbers(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
*/


// Multidimensional Arrays
// 2D Array
/*
#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/


// Enter Two Student Marks using 2D Array
/*
#include <stdio.h>

int main() {
    int marks[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter marks of student %d subject %d: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Marks of student %d subject %d: %d\n", i + 1, j + 1, marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/


// Practice Question : 1 - Write a function to count the number of odd number in an array.
/*
#include <stdio.h>

int countOdd(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("Number of odd numbers: %d", countOdd(arr, 8));
    return 0;
}

int countOdd(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}
*/


// Practice Question : 2 - For the given array, what will the following give?
// a. *(arr + 2)
// b. *(arr + 5)
/*
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    printf("a. %d\n", *(arr + 2));
    printf("b. %d\n", *(arr + 5));

    return 0;
}
*/


// Practice Question : 3 - Write a function to reverse an array.
/*
#include <stdio.h>

void reverseArray(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    reverseArray(arr, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d \t", arr[i]);
    }

    return 0;
}

void reverseArray(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
*/


// Practice Question : 4 - Write a program to store the first n Fibonacci numbers.
/*
#include <stdio.h>

int fibonacci(int n);

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d \t", fibonacci(i));
    }
    return 0;
}

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);   
}
*/


// Practice Question : 5 - Create a 2D array, storing the tables of 2 & 3.
/*
#include <stdio.h>

void storeTable(int arr[][10], int n, int m, int num);

int main() {
    int tables[2][10];

    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);

    printf("2nd Table: \n");
    for (int i = 0; i < 10; i++) {
        printf("%d \t", tables[0][i]);
    }

    printf("\n");

    printf("3rd Table: \n");
    for (int i = 0; i < 10; i++) {
        printf("%d \t", tables[1][i]);
    }
    printf("\n");

    return 0;
}

void storeTable(int arr[][10], int n, int m, int num) {
    for (int i = 0; i < m; i++) {
        arr[n][i] = num * (i + 1);
    }
}
*/


// Practice Question : 6 - In an array of numbers, find how many times does a number 'x' occur.
/*
#include <stdio.h>

void countNumber(int arr[], int n, int x);

int main() {
    int arr[] = {1, 5, 3, 4, 5, 6, 7, 8, 5, 10};

    countNumber(arr, 10, 5);

    return 0;
}

void countNumber(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    printf("Number %d occurs %d times", x, count);
}
*/


// Practice Question : 7 - Write a program to print the largest number in an array.
/*
#include <stdio.h>

int largestNumber(int arr[], int n);

int main() {
    int arr[] = {2, 9, 4, 1, 6, 3};

    printf("Largest number: %d", largestNumber(arr, 6));

    return 0;
}

int largestNumber(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
*/


// Practice Question : 8 - Write a program to insert an element at the end of an array.
/*
#include <stdio.h>

int insertElement(int arr[], int n, int x);

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5;

    // Original Array
    for (int i = 0; i < 5; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");

    int x;
    printf("Enter element to insert: ");
    scanf("%d", &x);

    n = insertElement(arr, n, x);

    // New Array
    for (int i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }

    return 0;
}

int insertElement(int arr[], int n, int x) {
    arr[n] = x;
    return n + 1;
}
*/

