// Chapter 8 - Strings ✅ 

// Strings  |   Strings are immutable
// A character array terminated by a '\0' (null character)
// The null character denotes string termination
/*
#include <stdio.h>

int main() {
    char name[] = {'B', 'I', 'K', 'R', 'A', 'M', '\0'};
    char _name[] = "BIKRAM";
    char class[] = "Computer Science Engineering";

    printf("My name is %s\n", name);
    printf("My name is %s\n", _name);
    printf("My class is %s\n", class);

    return 0;
}
*/


// Practice Question : 1 - Create a string firstName & lastName to store details of user & print all the characters using a loop.
/*
#include <stdio.h>

void printString(char str[]);

int main() {
    char firstName[] = "BIKRAM";
    char lastName[] = "MANDAL";

    printString(firstName);
    printf(" ");
    printString(lastName);

    return 0;
}

void printString(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
}
*/


// String Format Specifiers
/*
#include <stdio.h>

int main() {
    char name[20];

    printf("Enter your name : ");
    scanf("%s", name);

    printf("Hello, %s\n", name);

    return 0;
}
*/


// Practice Question : 2 - Ask the user to enter their firstName & print it back to them. Also try this with their fullName.
/*
#include <stdio.h>

int main() {
    char firstName[20];

    printf("Enter your first name : ");
    scanf("%s", firstName);

    printf("Hello, %s\n", firstName);

    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    char fullName[50];

    printf("Enter your full name : ");
    scanf("%s", fullName);

    printf("Hello, %s\n", fullName);

    return 0;
}
*/

// Important Note : scanf( ) cannot input multi-word strings with spaces
// Use gets( ) & puts( ) to input and print multi-word strings
// gets( ) are outdated and should not be used in new programs | Use fgets( )
/*
#include <stdio.h>

int main() {
    char fullName[50];

    gets(fullName);
    puts(fullName);

    return 0;
}
*/

// Use fgets( )
/*
#include <stdio.h>

int main() {
    int size = 50;
    char fullName[size];

    fgets(fullName, size, stdin);
    puts(fullName);

    return 0;
}
*/


// String using Pointers 
// char *str = "Hello World";
// Store string in memory & the assigned address is stored in the char pointer 'str' 
/*
#include <stdio.h>

int main() {
    //can be reinitialized
    char *str = "Hello World";
    puts(str);
    str = "Goodbye World";
    puts(str);

    // cannot be reinitialized
    char string[] = "Hello World";
    puts(string);
    string = "Goodbye World";
    puts(string);

    return 0;
}
*/


// Practice Question : 3 - Make a program that inputs user's name & prints its length.
/*
#include <stdio.h>

void printLength(char n[]);

int main() {
    char name[50];

    printf("Enter your name: ");
    fgets(name, 50, stdin);

    printLength(name);

    return 0;
}

void printLength(char n[]) {
    int length = 0;

    for (int i = 0; n[i] != '\0'; i++) {
        length++;
    }

    printf("Length of your name: %d\n", length - 1);
}
*/


// Standard Library Functions
// 1. strlen(str)
// count number of characters excluding '\0'
/*
#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "BIKRAM";

    int length = strlen(name);
    printf("Length of your name: %d\n", length);

    return 0;
}
*/

// 2. strcpy(newStr, oldStr)
// copies value of old string to new string
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20];
    char str2[] = "BIKRAM";

    strcpy(str1, str2);
    printf("Copied string: %s\n", str1);

    return 0;
}
*/

// 3. strcat(fastStr, secStr)
// concatenates first string with second string
/*
#include <stdio.h>
#include <string.h>

int main() {
    char fastStr[] = "BIKRAM";
    char secStr[] = "MANDAL";

    strcat(fastStr, secStr);
    printf("Concatenated string: %s\n", fastStr);

    return 0;
}
*/

// 4. strcpm(firstStr, secStr)
// Compares 2 strings & returns a value
// 0 if equal
// Positive if firstStr > secStr (ASCII)
// Negative if firstStr < secStr (ASCII)
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "World";
    char str2[] = "Hello";

    int result = strcmp(str1, str2);
    printf("Result: %d\n", result);

    return 0;
}
*/


// Practice Question : 4 - Take a string input from the user using %c.
/*
#include <stdio.h>
#include <string.h>

void printString(char str[]);

int main() {
    char name[50];

    printf("Enter your name: ");
    fgets(name, 50, stdin);

    printString(name);

    return 0;
}

void printString(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
}
*/


// Practice Question : 5 - Find the salted form of a password enter by the user if the salt is "123" & added at the end.
/*
#include <stdio.h>
#include <string.h>

void salting(char password[]);

int main() {
    char password[50];
    char salt[] = "123";

    printf("Enter your password: ");
    fgets(password, 50, stdin);

    strcat(password, salt);
    printf("Your password is: %s\n", password);
    

    return 0;
}

void salting(char password[]) {
    char salt[] = "123";
    char newPassword[50];

    strcpy(newPassword, password);
    strcat(newPassword, salt);
    printf("Your password is: %s\n", newPassword);
}
*/


// Practice Question : 6 - Write a function named slice, which takes a string & returns a sliced string from index n to m.
/*
#include <stdio.h>
#include <string.h>

void slice(char str[], int n, int m);

int main() {
    char str[] = "BIKRAM";
    int n = 1;
    int m = 4;

    slice(str, n, m);
    return 0;
}

void slice(char str[], int n, int m) {
    char sliced[m - n + 2];   // +1 for '\0'

    int j = 0;
    for (int i = n; i <= m; i++) {
        sliced[j++] = str[i];
    }

    sliced[j] = '\0';  // null terminator (MOST IMPORTANT)

    printf("Sliced string: %s\n", sliced);
}
*/


// Practice Question : 7 - Write a function to count the occurence of vowels in a string.
/*
#include <stdio.h>
#include <string.h>

void countVowels(char str[]);
void countConsonants(char str[]);

int main() {
    char str[] = "BIKRAM";
    countVowels(str);
    countConsonants(str);
    return 0;
}

void countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    printf("Number of vowels: %d\n", count);
}

void countConsonants(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            count++;
        }
    }
    printf("Number of consonants: %d\n", count);
}
*/


// Practice Question : 8 - Check if a given character is present in a string or not.
/*
#include <stdio.h>
#include <string.h>

void checkCharacter(char str[], char c);

int main() {
    char str[] = "BIKRAM";
    char c = 'A';

    checkCharacter(str, c);
    return 0;
}

void checkCharacter(char str[], char c) {
    int found = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Character '%c' is present in the string.\n", c);
    } else {
        printf("Character '%c' is not present in the string.\n", c);
    }
}
*/


// Practice Question : 9 - Write a program to convert all lowercase vowels in a string to uppercase.
/*
#include <stdio.h>
#include <string.h>

void convertVowels(char str[]);

int main() {
    char str[] = "bikram";
    convertVowels(str);
    return 0;
}

void convertVowels(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            str[i] = str[i] - 32;
        }
    }
    printf("Converted string: %s\n", str);
}
*/


// Practice Question : 10 - Write a program to print the hightest frequency character in a string.
/*
#include <stdio.h>
#include <string.h>

void highestFrequency(char str[]);

int main() {
    char str[] = "bikram";
    highestFrequency(str);
    return 0;
}

void highestFrequency(char str[]) {
    int frequency[26] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            frequency[str[i] - 'a']++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            frequency[str[i] - 'A']++;
        }
    }

    int highest = 0;
    char highestChar = 'a';
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > highest) {
            highest = frequency[i];
            highestChar = 'a' + i;
        }
    }

    printf("Highest frequency character: %c\n", highestChar);
}
*/


// Practice Question : 11 - Write a program to remove blank spaces from a string.
/*
#include <stdio.h>
#include <string.h>

void removeSpaces(char str[]);

int main() {
    char str[] = "b i k r a m";
    removeSpaces(str);
    return 0;
}

void removeSpaces(char str[]) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("String without spaces: %s\n", str);
}
*/


// Practice Question : 12 - Write a program to replace lowercase letters with uppercase & vice versa in a string.
/*
#include <stdio.h>
#include <string.h>

void swapCase(char str[]);

int main() {
    char str[] = "biKRam";
    swapCase(str);
    return 0;
}

void swapCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    printf("String with swapped case: %s\n", str);
}
*/

