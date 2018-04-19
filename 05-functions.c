#include <stdio.h>

/* void is a type when a function returns nothing */
int multiplicationTable ( int dimension );

int main()
{
    int dimension;

    printf( "Enter a positive integer 0 < x <= 20\t" );
    /* & tells you the memory address of a variable following it (myNumber)  */
    scanf( "%d", &dimension );
    
    if ( dimension > 20 || dimension < 1) {
        printf( "FAIL\n" );
    }
    else {
        multiplicationTable( dimension );
    }
    
    getchar();
    return 0;
}

int multiplicationTable ( int dimension )
{
    int row, column;

    for ( row = 1; row <= dimension; row++ ) {
        column = 1;
        while ( column <= dimension ) {
            printf( "%4d", row*column );
            column++;
        }
        printf( "\n" );
    }
    return 0;
}
