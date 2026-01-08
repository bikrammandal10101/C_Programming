// Structures ✅ 
// a collection of values of different data types
// structures are stored in contiguous memory locations
/*
#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person person1;
    person1.age = 24;
    person1.height = 5.4;
    strcpy(person1.name, "Bikram Mandal");

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f\n", person1.height);

    return 0;
}
*/


// Practice Question : 1 - Write a program to store the data of 3 students.
/*
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float cgpa;
};

int main() {
    struct Student student1, student2, student3;
    student1.roll = 1;
    student1.cgpa = 90.5;
    strcpy(student1.name, "Kunal Mandal");

    student2.roll = 2;
    student2.cgpa = 80.5;
    strcpy(student2.name, "Gour Hari Das");

    student3.roll = 3;
    student3.cgpa = 70.5;
    strcpy(student3.name, "Bikram Mandal");

    printf("Name: %s\n", student1.name);
    printf("Roll: %d\n", student1.roll);
    printf("CGPA: %.1f\n", student1.cgpa);

    printf("Name: %s\n", student2.name);
    printf("Roll: %d\n", student2.roll);
    printf("CGPA: %.1f\n", student2.cgpa);

    printf("Name: %s\n", student3.name);
    printf("Roll: %d\n", student3.roll);
    printf("CGPA: %.1f\n", student3.cgpa);

    return 0;
}
*/

// Benefits of using Structures
// Saves us from creating too many variables
// Good data management/organization


// Array of Structures
/*
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    float cgpa;
    char name[50];
};

int main() {
    struct Student ECE[50], CSE[50], IT[50];

    ECE[0].roll = 1;
    ECE[0].cgpa = 90.5;
    strcpy(ECE[0].name, "Kunal Mandal");

    ECE[1].roll = 2;
    ECE[1].cgpa = 80.5;
    strcpy(ECE[1].name, "Gour Hari Das");

    ECE[2].roll = 3;
    ECE[2].cgpa = 70.5;
    strcpy(ECE[2].name, "Bikram Mandal");

    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", ECE[i].name);
        printf("Roll: %d\n", ECE[i].roll);
        printf("CGPA: %.1f\n", ECE[i].cgpa);
    }

    CSE[0].roll = 1;
    CSE[0].cgpa = 90.5;
    strcpy(CSE[0].name, "Kunal Mandal");

    CSE[1].roll = 2;
    CSE[1].cgpa = 80.5;
    strcpy(CSE[1].name, "Gour Hari Das");

    CSE[2].roll = 3;
    CSE[2].cgpa = 70.5;
    strcpy(CSE[2].name, "Bikram Mandal");

    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", CSE[i].name);
        printf("Roll: %d\n", CSE[i].roll);
        printf("CGPA: %.1f\n", CSE[i].cgpa);
    }

    IT[0].roll = 1;
    IT[0].cgpa = 90.5;
    strcpy(IT[0].name, "Kunal Mandal");

    IT[1].roll = 2;
    IT[1].cgpa = 80.5;
    strcpy(IT[1].name, "Gour Hari Das");

    IT[2].roll = 3;
    IT[2].cgpa = 70.5;
    strcpy(IT[2].name, "Bikram Mandal");

    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", IT[i].name);
        printf("Roll: %d\n", IT[i].roll);
        printf("CGPA: %.1f\n", IT[i].cgpa);
    }

    return 0;
}
*/


// Initializing Structures ✅ 
/*
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    float cgpa;
    char name[50];
};

int main() {
    struct Student student1 = {1, 90.5, "Kunal Mandal"};
    struct Student student2 = {2, 80.5, "Gour Hari Das"};
    struct Student student3 = {3, 70.5, "Bikram Mandal"};

    printf("Name: %s\n", student1.name);
    printf("Roll: %d\n", student1.roll);
    printf("CGPA: %.1f\n", student1.cgpa);

    printf("Name: %s\n", student2.name);
    printf("Roll: %d\n", student2.roll);
    printf("CGPA: %.1f\n", student2.cgpa);

    printf("Name: %s\n", student3.name);
    printf("Roll: %d\n", student3.roll);
    printf("CGPA: %.1f\n", student3.cgpa);

    return 0;
}
*/


// Pointers to Structures
/*
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    float cgpa;
    char name[50];
};

int main() {
    struct Student student1 = {1, 81.17, "Bikram Mandal"};
    printf("Name: %s\n", student1.name);
    printf("Roll: %d\n", student1.roll);
    printf("CGPA: %.2f\n", student1.cgpa);

    // using pointer
    struct Student *ptr = &student1;
    printf("Name: %s\n", (*ptr).name);
    printf("Roll: %d\n", (*ptr).roll);
    printf("CGPA: %.2f\n", (*ptr).cgpa);

    return 0;
}
*/


// Arrow Operator
/*
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    float cgpa;
    char name[50];
};

int main() {
    struct Student student1 = {1, 81.17, "Bikram Mandal"};

    // using pointer | arrow operator
    struct Student *ptr = &student1;
    printf("Name: %s\n", ptr->name);
    printf("Roll: %d\n", ptr->roll);
    printf("CGPA: %.2f\n", ptr->cgpa);

    return 0;
}
*/


// Passing structure to function
/*
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    float cgpa;
    char name[50];
};

void printInfo(struct Student s1);

int main() {
    struct Student student1 = {1, 81.17, "Bikram Mandal"};
    printInfo(student1);
    return 0;
}

void printInfo(struct Student s1) {
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("CGPA: %.2f\n", s1.cgpa);
}
*/


// typedef Keyword
// used to create alias for data types
/*
#include <stdio.h>
#include <string.h>

typedef struct ComputerScienceEngineering {
    int roll;
    float cgpa;
    char name[50];
}cse;

int main() {
    cse s1;

    s1.roll = 1;
    s1.cgpa = 81.17;
    strcpy(s1.name, "Bikram Mandal");

    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("CGPA: %.2f\n", s1.cgpa);

    return 0;
}
*/


// Practice Question : 2 - Enter Address (house no, block, city, state, pincode) of 5 people.
/*
#include <stdio.h>
#include <string.h>

struct Address {
    int house_no;
    char block[50];
    char city[50];
    char state[50];
    int pincode;
};

int main() {
    struct Address adds[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter house no: ");
        scanf("%d", &adds[i].house_no);
        printf("Enter block: ");
        scanf("%s", adds[i].block);
        printf("Enter city: ");
        scanf("%s", adds[i].city);
        printf("Enter state: ");
        scanf("%s", adds[i].state);
        printf("Enter pincode: ");
        scanf("%d", &adds[i].pincode);
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        printf("House no: %d\n", adds[i].house_no);
        printf("Block: %s\n", adds[i].block);
        printf("City: %s\n", adds[i].city);
        printf("State: %s\n", adds[i].state);
        printf("Pincode: %d\n", adds[i].pincode);
        printf("\n");
    }

    return 0;
}
*/


// Practice Question : 3 - Create a Structure to store Vectors. Then make a function to Return sum of 2 vectors.
/*
#include <stdio.h>

struct Vector {
    float x;
    float y;
    float z;
};

struct Vector addVectors(struct Vector v1, struct Vector v2) {
    struct Vector sum;
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    sum.z = v1.z + v2.z;
    return sum;
}

int main() {
    struct Vector v1 = {1.0, 2.0, 3.0};
    struct Vector v2 = {4.0, 5.0, 6.0};

    struct Vector sum = addVectors(v1, v2);

    printf("Sum of vectors: (%.1f, %.1f, %.1f)\n", sum.x, sum.y, sum.z);

    return 0;
}
*/


// Practice Question : 4 - Create a Structure to store Complex Numbers. (Using Arrow Operator)
/*
#include <stdio.h>
#include <math.h>

struct Complex {
    float real;
    float imaginary;
};

float magnitude(struct Complex c);

int main() {
    struct Complex c1 = {3.0, 4.0};
    struct Complex *ptr = &c1;

    printf("Real part: %.2f\n", ptr->real);
    printf("Imaginary part: %.2f\n", ptr->imaginary);

    printf("Magnitude of complex number: %.2f\n", magnitude(c1));

    return 0;
}

float magnitude(struct Complex c) {
    return sqrt(c.real * c.real + c.imaginary * c.imaginary);
}
*/


// Practice Question : 5 - Make a Stucture to store Bank Account information of a customer of ABC Bank. Also, make an alice for it.
/*
#include <stdio.h>
#include <string.h>

typedef struct BankAccount {
    char name[50];
    int account_number;
    float balance;
} ba;

int main() {
    ba account[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter name: ");
        scanf("%s", account[i].name);
        printf("Enter account number: ");
        scanf("%d", &account[i].account_number);
        printf("Enter balance: ");
        scanf("%f", &account[i].balance);
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", account[i].name);
        printf("Account number: %d\n", account[i].account_number);
        printf("Balance: %.2f\n", account[i].balance);
        printf("\n");
    }

    return 0;
}
*/



// Important Projects for Structure
// Make a system that can store information of all students, teachers & staff members of your college in the form of a Structure.
/*
#include <stdio.h>
#include <string.h>

struct Students {
    int roll;
    float cgpa;
    char name[50];
};  

struct Teachers {
    int id;
    char subject[50];
    char name[50];
};

struct Staff_Members {
    int id;
    char department[50];
    char name[50];
};

int main() {
    struct Students students[5];
    struct Teachers teachers[5];
    struct Staff_Members staff_members[5];

    // Students Information
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &students[i].roll);
        printf("Enter CGPA of student %d: ", i + 1);
        scanf("%f", &students[i].cgpa);
        printf("\n");
    }

    // Teachers Information
    for (int i = 0; i < 5; i++) {
        printf("Enter name of teacher %d: ", i + 1);
        scanf("%s", teachers[i].name);
        printf("Enter ID number of teacher %d: ", i + 1);
        scanf("%d", &teachers[i].id);
        printf("Enter subject of teacher %d: ", i + 1);
        scanf("%s", teachers[i].subject);
        printf("\n");
    }

    // Staff Members Information
    for (int i = 0; i < 5; i++) {
        printf("Enter name of staff member %d: ", i + 1);
        scanf("%s", staff_members[i].name);
        printf("Enter ID number of staff member %d: ", i + 1);
        scanf("%d", &staff_members[i].id);
        printf("Enter department of staff member %d: ", i + 1);
        scanf("%s", staff_members[i].department);
        printf("\n");
    }

    // Displaying Information
    printf("\nStudents Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Roll: %d\n", students[i].roll);
        printf("CGPA: %.2f\n", students[i].cgpa);
        printf("\n");
    }

    printf("\nTeachers Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", teachers[i].name);
        printf("ID: %d\n", teachers[i].id);
        printf("Subject: %s\n", teachers[i].subject);
        printf("\n");
    }

    printf("\nStaff Members Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", staff_members[i].name);
        printf("ID: %d\n", staff_members[i].id);
        printf("Department: %s\n", staff_members[i].department);
        printf("\n");
    }

    return 0;
}
*/

// You can also make this into a C Project with other functionalities like CGPA Calculator of students, storing attendance etc.

