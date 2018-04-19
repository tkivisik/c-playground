#include <stdio.h>

int main()
{
    int dimension;
    int row, column;

    printf( "Enter a positive integer 0 < x <= 20\t" );
    /* & tells you the memory address of a variable following it (myNumber)  */
    scanf( "%d", &dimension );
    
    /* If a comparison is true then it returns a 1, if flase, then 0  */
    /* ! means NOT, && means AND, || means OR */
    if ( dimension > 20 || dimension < 1) {
        printf( "FAIL\n" );
    }
    else {
        for ( row = 1; row <= dimension; row++ ) {
            column = 1;
            while ( column <= dimension ) {
                printf( "%4d", row*column );
                column++;
            }
            printf( "\n" );
        }
    }
    
    getchar();
    return 0;
}
