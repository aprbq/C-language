#include <stdio.h>

int main (){
    int score ;

    printf("Please enter your score (0-100): ");
    scanf("%d", &score);

    switch(score/10){
        case 10:
            switch(score%10){
                case 0:
                    printf("Grade = A\n");
                    break;
                default :
                    printf("Invalid score!");
                    break;
            } break;
        case 9: case 8:
            printf("Grade = A\n");
            break;
        case 7:
            printf("Grade = B\n");
            break;
        case 6:
            printf("Grade = C\n");
            break;
        case 5:
            printf("Grade = D\n");
            break;
        case 4: case 3: case 2: case 1:
            printf("Grade = F\n");
            break;
        case 0:
            switch(score%10){
                case 9: case 8: case 7: case 6: case 5: case 4: case 3: case 2: case 1: case 0:
                    printf("Grade = F\n");
                    break;
                default :
                    printf("Invalid score!");
                    break;
            } break;
        default :
            printf("Invalid score!") ;
            break;
    }
    return 0;
}