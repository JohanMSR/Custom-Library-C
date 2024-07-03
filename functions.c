/*Basic Functions*/
#include <string.h>
#include <stdio.h>

int sum(int numb){
    numb++;
    return numb;
}

int remain(int numb){
    numb--;
    return numb;
}

char generateCharacters(char name[], char character[], int amount){
    for (int i = 0; i <= amount; i++){
        strcat(name, character);
    }
    return name[100];
}

void printCharacters(char character[], int amount){
    for (int i = 0; i <= amount; i++){
        printf("%s", character);
    }
}
char generateDate(int day, int month, int year){
    char get_month[10];
    switch (month)
    {
    case 1:
        strcpy(get_month, "Ene");
        break;
    
    default:
        break;
    }
    printf("%d/ %s /%d", day, get_month, year);
}
