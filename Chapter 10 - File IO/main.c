// File IO (Input/Output) ✅ 
// FILE - container in a storage device to store data

// - RAM is volatile
// - Contents are lost when program terminates
// - Files are used to persist the data

// - Standard Input (stdin) - Keyboard
// - Standard Output (stdout) - Monitor
// - Standard Error (stderr) - Monitor

// File Pointers
// FILE is a (hidden)structure that needs to be created for opening a file 
// - A FILE ptr that points to this structure & is used to access the file.

// - FILE *fptr
// - fptr = fopen("file_name", "mode")
// - fclose(fptr)

// Modes
// - "r" - Read
// - "w" - Write
// - "a" - Append
// - "r+" - Read & Write
// - "w+" - Write & Read
// - "a+" - Append & Read

// - FILE *fptr = fopen("file_name", "mode");
// - fclose(fptr);

// File Handling
// - Error Handling
// - Exceptions
// - Exception Handling

// - fopen()
// - fclose()
// - fread()
// - fwrite()
// - fseek()
// - ftell()
// - fgetpos()
// - fsetpos()
// - feof()
// - ferror()
// - clearerr()
// - fputc()
// - fgetc()


#include <stdio.h>

int main() {
    FILE *fptr;

    // File does not exist
    /*
    fptr = fopen("test.txt", "r");

    if (fptr == NULL) {
        printf("File not found\n");
    } else {
        fclose(fptr);
    }
    */


    // Reading from a file
    /*
    fptr = fopen("test.txt", "r");

    char ch;
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }
    */


    // Writing to a file
    /*
    fptr = fopen("test.txt", "w");

    char ch;
    while ((ch = fgetc(stdin)) != EOF) {
        fputc(ch, fptr);
    }
    */


    // Appending to a file
    /*
    fptr = fopen("test.txt", "a");

    char ch;
    while ((ch = fgetc(stdin)) != EOF) {
        fputc(ch, fptr);
    }
    */


    // Copying a file
    /*
    fptr = fopen("test.txt", "r");

    char ch;
    while ((ch = fgetc(fptr)) != EOF) {
        fputc(ch, stdout);
    }
    */


    // Closing a file
    fptr = fopen("test.txt", "r");

    fclose(fptr);

    return 0;
}


// EOF (End Of File)
// fgetc returns EOF to show that the file has ended


// Practice Question : 1 - Make a program to input student information from a user & store it in a file
/*
#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter cgpa: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student Information :\n");
    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Age: %d\n", age);
    fprintf(fptr, "CGPA: %.2f\n", cgpa);

    fclose(fptr);

    return 0;
}
*/


// Practice Question : 2 - Write a program to write all the odd numbers from 1 to n in a file.
/*
#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("NewTest.txt", "w");

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            fprintf(fptr, "%d\n", i);
        }
    }

    fclose(fptr);

    return 0;
}
*/


// Practice Question : 3 - Two Numbers (a & b), are written in a file. Write a program to replace them with their sum.
/*
#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("sum.txt", "w");

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    fprintf(fptr, "%d\n", a + b);

    fclose(fptr);
    return 0;
}
*/

