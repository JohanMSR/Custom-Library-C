/*Basic Functions*/
#include <string.h>

int sum(int numb){
    numb++;
    return numb;
}

int remainder(int numb){
    numb--;
    return numb;
}

char printCharacters(char name[], int amount){
    for (int i = 0; i <= amount; i++){
        strcat(name, "#");
    }
    return name[100];
}




