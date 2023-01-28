/*
    Steps 
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language (C/C++/Java/Python)
    Step 4 : Write the program
    Step5 : Test the prgram
*/
// Accept N number from user and perform addition

// Input
// Value of N = 5
// Values : 10 20 30 40 50

// Output
// Addirion is : 150

// Algorithm
/*
    Start
        Accept the number of elements from user
        Allocate the memory to store that numbers
        Accept the numbers from useer
        Perform addition of all numbers
        Display the addition
    End
*/
#include<stdio.h>   // For printf and scanf
#include<stdlib.h>  // For malloc and free

/////////////////////////////////////////////////
//
//  Application Name : Addition on N numbers
//  Input : N numbers
//  Output : Addition
//  Author : Prathmesh Vyas
//  Date : 18 September 2022
//
//////////////////////////////////////////////////

int main()
{
    int *Arr = NULL; // Pointer to hold the address of array
    int iSize = 0; // Variable to hold size of array
    register int i = 0; // Loop counter
    int iSum = 0; // To hold the addition

    printf("Please enter how many elelments you want ?\n");
    scanf("%d" , &iSize);

    // Allocate the memory
    Arr = (int *)malloc(iSize * sizeof(int));
    printf("Memory Allocation is successfull\n");

    printf("Please enter the elements\n");
    //      1       2       3
    for ( i = 0; i < iSize; i++)
    {
        scanf("%d" , &Arr[i]); // 4
    }

    // Perform addition
    //      1       2       3
    for ( i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i]; // 4
    }

    printf("Addition is : %d\n" , iSum);

    free(Arr);
    printf("Memory gets Deallocate\n");
    
    return 0;
}