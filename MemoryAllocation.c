#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];     //  Static memory alloation

    int *p = NULL;

    p = (int *)malloc(sizeof(int) * 5);

    // Use the memory

    free(p);

    // code

    return 0;   // Memory of Arr gets deallocated at this point
}

// Prototype of function
//      void * malloc(int size);  ---> Return  value of malloc gets in void *