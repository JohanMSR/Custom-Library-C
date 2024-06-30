/*Basic Functions*/
#include <string.h>

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





