// Dynamic Memory Allocation ✅ 
// It is a way to allocate memory to a data structure during the runtime.
// We need some functions to allocate & free memory dynamically.

// Functions for Dynamic Memory Allocation
// a. malloc()
// b. calloc()
// c. realloc()
// d. free()

// a. malloc() | takes number of bytes to be allocated & returns a pointer of type void
// It allocates memory dynamically.
// It returns a pointer to the allocated memory.
// malloc() returns NULL if the memory is not allocated successfully.
// Syntax: void *malloc(size_t size);
// size_t: It is a data type that is used to store the size of the memory to be allocated.
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\n");
    free(ptr);

    return 0;
}
*/


// b. calloc() | initializes with 0 | Continuous Memory Allocation
// Syntax: void *calloc(size_t nmemb, size_t size);
// nmemb: It is a data type that is used to store the number of elements to be allocated.
// size: It is a data type that is used to store the size of the memory to be allocated.
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\n");
    free(ptr);

    return 0;
}
*/

// c. realloc() | Reallocates memory dynamically.
// Syntax: void *realloc(void *ptr, size_t size);
// ptr: It is a pointer to the memory to be reallocated.
// size: It is a data type that is used to store the size of the memory to be allocated.
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\n");
    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    for (int i = 0; i < 10; i++) {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\n");
    free(ptr);

    return 0;
}
*/

// d. free() | Frees the allocated memory.
// Syntax: void free(void *ptr);
// ptr: It is a pointer to the memory to be freed.



// Practice Question : 1 - Allocate memory for 5 numbers. Than dynamically increase it to 8 numbers.
// 5 numbers: 1 2 3 4 5
// 8 numbers: 1 2 3 4 5 6 7 8
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\n");
    ptr = (int *)realloc(ptr, 8 * sizeof(int));

    for (int i = 0; i < 8; i++) {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < 8; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\n");
    free(ptr);

    return 0;
}
*/


// Practice Question : 2 - Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even numbers.
// 5 odd numbers: 1 3 5 7 9
// 6 even numbers: 2 4 6 8 10 12
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        ptr[i] = 2 * (i + 1) - 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\n");
    ptr = (int *)realloc(ptr, 6 * sizeof(int));

    for (int i = 0; i < 6; i++) {
        ptr[i] = 2 * (i + 1);
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\n");
    free(ptr);

    return 0;
}
*/

