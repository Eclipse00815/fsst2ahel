#include <stdio.h>

int main()
{
    float zahl;
    float referenz = 30;

    printf("Gib hier eine Zahl nach deinen Wuenschen an: \n");
    scanf("%f", &zahl);

    if (zahl > referenz)
    {
        printf("Die Referenzzahl ist 30. Deine Zahl ist somit groesser als die Referenzzahl.\n");
    }
    if (zahl < referenz)
    {
        printf("Die Referenzzahl ist 30. Deine Zahl ist somit kleiner als die Referenzzahl.\n");
    }
    if (zahl == referenz)
    {
        printf("Die Referenzzahl ist 30. Du hast sie erraten, super!\n");
    }

    return 0;
}