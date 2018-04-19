#include <stdio.h>

int main()
{
    int myNumber;

    printf( "Type in a integer larger than 10\n" );
    /* & tells you the memory address of a variable following it (myNumber)  */
    scanf( "%d", &myNumber );
    
    /* If a comparison is true then it returns a 1, if flase, then 0  */
    /* ! means NOT, && means AND, || means OR */
    if ( myNumber > 10 ) {
        printf( "You entered %d, it is larger than 10\n", myNumber );
    }
    else if ( myNumber < 10 ) {
        printf( "Your number %d fails to comply :(\n", myNumber );
    }
    else {
        printf( "Your number %d is close to being larger than 10, but still not.\n", myNumber );
    }
    getchar();
    return 0;
}
