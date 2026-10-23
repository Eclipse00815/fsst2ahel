#include <stdio.h>

int main()
{
    const char secret[] = "REDBULL4EVER"; // Array ist IMMER eine Adresse!
    const char len = sizeof(secret -1);
    char guessed[len];
    char guess;
    int matches = 0;

    for (int i = 0; i < len; i++)
    {
        guessed[i] = '_';
    }

    //Character Arrays: Einziges Array, wo der Computer weiß, wo das Array zu Ende ist.
    //Array "1234" hat fünf Zeichen - "1234\0" (Nullterminator)
    //Nullteminator beendet das Array ('1', '2', '\0', '3', '4') = 1, 2 - Computer beendet bei \0

    printf("Choose a character for the guess: \n");
    if (scanf(" %c", &guess) != 1)  //& ist nötig, damit die Funktion überhaupt etwas zurückgibt. scanf hat einen eigenen Ausgabewert (int)
    {
        printf("Ungültige Eingabe.");
        return 1;
    }

    for (int i = 0; i < len; i++)
    {
        if (secret[i] == guess)
        {
            matches ++;
            guessed[i] = guess;
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%c ", guessed[i]);
    }

    printf("Matches: %d\n", matches);

    return 0;

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
}