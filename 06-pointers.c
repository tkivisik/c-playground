#include <stdio.h>

/* void is a type when a function returns nothing */
int multiplicationTable ( int dimension );

int main()
{
    int dimension;
    int *pointer_to_dimension;

    printf( "Enter a positive integer 0 < x <= 20\t" );
    /* & tells you the memory address of a variable following it (myNumber)  */
    scanf( "%d", &dimension );
    
    if ( dimension > 20 || dimension < 1) {
        printf( "FAIL\n" );
    }
    else {
        printf( "You just typed in %d\n", dimension );
        printf( "I will now make a pointer to dimension with a value %d\n", dimension );
        pointer_to_dimension = &dimension;
        printf( "Pointer now contains a value %d\n", *pointer_to_dimension );
    }
    
    getchar();
    return 0;
}
