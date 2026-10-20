#include <stdio.h>

int main()
{
    const char secret = 'X';
    const char guess = 'Y';

    if (guess == secret)
    {
        printf("You got it right! The secret was %c.", secret);
    }
    
    else
    {
        printf("That is wrong.");
    }

    return 0;
}