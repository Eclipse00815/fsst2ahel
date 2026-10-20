#include <stdio.h>

int main()
{
    const char secret[] = "REDBULL4EVER"; // Array ist IMMER eine Adresse!
    char guess;

    //Character Arrays: Einziges Array, wo der Computer weiß, wo das Array zu Ende ist.
    //Array "1234" hat fünf Zeichen - "1234\0" (Nullterminator)
    //Nullteminator beendet das Array ('1', '2', '\0', '3', '4') = 1, 2 - Computer beendet bei \0

    printf("Choose a character for the guess: \n");
    if (scanf(" %c", &guess) != 1)  //& ist nötig, damit die Funktion überhaupt etwas zurückgibt. scanf hat einen eigenen Ausgabewert (int)
    {
        printf("Ungültige Eingabe.");
        return 1;
    }

    int matches = 0;
    for (int i = 0; i < (sizeof(secret) / sizeof(char)) - 1; i++)
    {
        if (secret[i] == guess)
        {
            matches ++;
        }
    }

    printf("Matches: %d\n", matches);

    /*
    if (guess == secret[0])
    {
        printf("You got it right! The secret was %c.", secret[0]);
    }
    
    else
    {
        printf("That is wrong.");
    }
    */
    return 0;
}