#include <stdio.h>

struct bank_account {
  int id;
  char owner[20];
  float balance;
};

int main()
{
    struct bank_account first_account;

    printf( "Enter an account id (inteter):\t" );
    /* & tells you the memory address of a variable following it (myNumber)  */
    scanf( "%d", &first_account.id );
    printf( "Enter an account owner's name (char[20]):\t" );
    scanf( "%s", first_account.owner );
    printf( "Enter an account balance (float):\t" );
    scanf( "%f", &first_account.balance );

    if ( first_account.balance < 0) {
        printf( "The balance can't be negative\n" );
    }
    else {
        printf( "Account id     : %d\n", first_account.id); 
        printf( "Account owner  : %s\n", first_account.owner); 
        printf( "Account balance: %f\n", first_account.balance); 
    }
    
    getchar();
    return 0;
}
