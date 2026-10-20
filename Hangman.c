#include <stdio.h>

int main()
{
    const char secret = 'X';
    char guess;

    printf("Choose a character for the guess: \n");
    if (scanf(" %c", &guess) != 1)  //& ist nötig, damit die Funktion überhaupt etwas zurückgibt. scanf hat einen eigenen Ausgabewert (int)
    {
        printf("Ungültige Eingabe.");
        return 1;
    }
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