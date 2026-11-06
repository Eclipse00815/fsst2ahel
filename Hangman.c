#include <stdio.h>

int strcmp(const char word1[], char word2[]) {
    int diff = 0;
    for (int i = 0; word1[i] != '\0' && !diff; i++, diff |= word1[i] != word2[i])
        ;
    return diff;
}

//#

int main()
{
    const char secret[] = "REDBULL4EVER"; // Array ist IMMER eine Adresse!
    const int len = sizeof(secret) -1;
    char guessed[len];
    char guess;
    int matches = 0;

    for (int i = 0; i < len; i++) {
        guessed[i] = '_';
    }

    //Character Arrays: Einziges Array, wo der Computer weiß, wo das Array zu Ende ist.
    //Array "1234" hat fünf Zeichen - "1234\0" (Nullterminator)
    //Nullteminator beendet das Array ('1', '2', '\0', '3', '4') = 1, 2 - Computer beendet bei \0

    int fails = 0;
    while (fails < 5) {
        printf("Choose a character for the guess: \n");
        if (scanf(" %c", &guess) != 1) {
            printf("Ungültige Eingabe.\n");
            return 1;
        }
        //& ist nötig, damit die Funktion überhaupt etwas zurückgibt. scanf hat einen eigenen Ausgabewert (int)

        matches = 0;
        for (int i = 0; i < len; i++) {
            if (guess == secret[i]) {
                matches ++;
                guessed[i] = guess;
            }
        }

        for (int i = 0; i < len; i++) {
            printf("%c ", guessed[i]);
        }

        fails += (matches == 0);

        //*=>

        printf("Matches: %d\n", matches);
    }

    return 0;


    //# 

    /*
    int strcmp(const char word1[], char word2[]) {
        int i = 0;
        for (word1[i] != '\0'; i++) {
            if (word1[i] != word2[i]) {
                return 0;
            }
        }
        return 1;
    }
    */

    // 0 = False, 1 = True


    //*=>
    /*
        if (matches == 0)
        {
            fails++;
        }
    */


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