#include <stdio.h>

typedef enum
{
    RED,
    YELLOW,
    BLUE,
    GREEN,
    PINK
} Color;

int main()
{
    int choice;
    printf("Red:0\tYellow:1\tBlue:2\tGreen:3\tPink:4\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case RED:
        printf("Hexcode for red is: #FF0000\n");
        break;

    case YELLOW:
        printf("Hexcode for yellow is: #FFFF00\n");
        break;

    case BLUE:
        printf("Hexcode for blue is: #0000FF\n");
        break;

    case GREEN:
        printf("Hexcode for green is: #00FF00\n");
        break;
    case PINK:
        printf("Hexcode for pink is: #FFC0CB\n");
        break;

    default:
        printf("Invalid Choice!");
        break;
    }
}