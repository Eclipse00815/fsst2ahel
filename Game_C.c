#include <stdio.h>
#include <string.h>

int main()
{
    printf("Narrator: 'Welcome. This is a text-based adventure game. In here, you die and reincarnate in a magic world.'\n");
    printf("Narrator: 'Don't think of it as all rainbows and unicorns tho...'\n");
    printf("Narrator: 'This world is evil.'\n");
    printf("Narrator: 'Let us first look up your data...'\n");
    printf("Hello! Well, as the Narrator said, we'll be gathering your personal data now.\n");
    printf("Why, do not worry, we'll only do so in order to initiate the game. So... first, your gender, alright?\n");

    printf("Oh, one more thing. There are only a limited amount of gender and races available.\n");
    printf("For gender, we have male, female and non-binary for gender.\n");
    printf("For race, we got human, werewolf, vampire and elf.\n");
    printf("For class, we got warrior, hunter, mage, witch and shaman.\n");
    printf("\n");

    char gender[50];
    int age;
    char name[50];
    char race[50];
    char class[50];

    printf("Enter your gender: ");
    scanf("%s", gender);

    while (strcasecmp(gender, "female") != 0 && strcasecmp(gender, "male") != 0 && strcasecmp(gender, "non-binary") != 0)
    {
        printf("... excuse me? Please try again and use a correct gender.\n");
        printf("Enter your gender: ");
        scanf("%s", gender);
    }

    printf("Very well. You will be a %s player. \n", gender);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your race: ");
    scanf("%s", race);

    while (strcasecmp(race, "human") != 0 && strcasecmp(race, "werewolf") != 0 && strcasecmp(race, "vampire") != 0 && strcasecmp(race, "elf") != 0)
    {
        printf("... excuse me? Please try again and use a correct race. \n");
        printf("Enter your class: ");
        scanf("%s", race);
    }
    printf("Good. You will be a %s.\n", race);

    printf("Enter your class: ");
    scanf("%s", class);

    while (strcasecmp(class, "warrior") != 0 && strcasecmp(class, "hunter") != 0 && strcasecmp(class, "mage") != 0 && strcasecmp(class, "witch") != 0 && strcasecmp(class, "shaman") != 0)
    {
        printf("... excuse me? Please try again and use a correct race. \n");
        printf("Enter your class: ");
        scanf("%s", class);
    }
    printf("Good. You will be a %s.\n", class);

    printf("\n ----- Users Profile ----- \n");
    printf("Gender: You are a %s player! \n", gender);
    printf("Age: You are %d years old! \n", age);
    printf("Name: Your name is %s! \n", name);
    printf("Race: You are a %s! \n", race);
    printf("Class: You are a %s! \n", class);

    printf("Now, we have your data and you have your Users profile.\n");
    printf("Let me first give you a few Quick Tutorials. Listen closely, will you?\n");
    printf("\n");
    printf("\n ===== Tutorial: Overview ===== \n");
    printf("In this game, you will have to fight, gather resources, interact with NPCs and survive.\n");
    printf("You have so-called 'stats', and all of them change how you fight.\n");
    printf("Every monster drops something that you can use for crafting, trading or sell for money.\n");
    printf("For every drop, you see an overview to how the iem is used best, the selling price and the rarity.\n");
    printf("The mobs themselves also have specific rarities and races. For example, the wolf:\n");
    printf("Wolf: Common, Animal.\n");
    printf("All stats start with the basic points of 5. Tho, some classes might have different stats.\n");
    printf("So much for that... Let us update your User profile!\n");
    printf("\n");

    printf("\n ----- Users Profile ----- \n");
    printf("Gender: You are a %s player! \n", gender);
    printf("Age: You are %d years old! \n", age);
    printf("Name: Your name is %s! \n", name);
    printf("Race: You are a %s! \n", race);
    printf("Class: You are a %s! \n", class);
    printf("Attack: ");
    printf("Defense: ");
    printf("Speed: ");
    printf("Stealth: ");
    printf("Stamina: ");

    return 0;
}