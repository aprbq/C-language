#include <stdio.h>
#include <string.h>
int main(void) 
{
    char elements[6][20] = {"1 H  Hydrogen", "2 He Helium", "3 Li Lithium",
                      "6 C  Carbon", "7 N  Nitrogen","8 O  Oxygen"};
    char numbers[6][2];
    char symbols[6][3];
    char names[6][30];

    for (int i = 0; i < 6; i++) {
        strncpy(numbers[i], &elements[i][0], 1);
        numbers[i][1] = '\0';
        strncpy(symbols[i], &elements[i][2], 2);
        symbols[i][2] = '\0';
        strcpy(names[i], &elements[i][5]);
    }
    printf("%-15s%-8s%-20s\n","Atomic Number","symbol","Name");
    for (int k = 0; k < 6; k++) {
        printf("%-15s%-8s%-20s\n",numbers[k],symbols[k],names[k]);
    }
    return (0);
}