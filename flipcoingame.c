#include <stdio.h>


typedef struct
{
    int coins;

} Player;


int flipCoin(void)
{
    int random = srand(time( NULL ) );
    return random;
}


int main(void)
{
    Player joe;
    Player jane;

    joe.coins = 100;
    jane.coins = 100;

    printf("\tJoe's coins: %d\n", joe.coins );
    printf("\tJane's coins: %d\n", jane.coins );
    printf("\t Coin flip: %d", flipCoin() );

    return 1;
}
