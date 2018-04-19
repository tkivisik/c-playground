#include <stdio.h>

int main()
{
    int myNumber;

    printf( "Type in a special number!\n" );
    /* & tells you the memory address of a variable following it (myNumber)  */
    scanf( "%d", &myNumber );
    printf( "You entered %d\n", myNumber );
    
    getchar();
    return 0;
}