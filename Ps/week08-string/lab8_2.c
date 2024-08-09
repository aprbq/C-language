#include <stdio.h>
#include <string.h>
#define LEN 20
int main(void) 
{
    char first_name[15];
    char last_name[15];
    char full_name[LEN];
    full_name[0] = '\0';
    printf("Enter your last name> ");
    scanf("%s",&last_name);
    printf("Enter your first name> ");
    scanf("%s",&first_name);
    if (strlen(last_name) + strlen(first_name) + 2 > LEN) {
        strcat(full_name,last_name);
        strcat(full_name,", ");
        strncat(full_name,&first_name[0],1);
        strcat(full_name,".");
        printf("%s",full_name); 
    }
    else {
        strcat(full_name,last_name);
        strcat(full_name,", ");
        strcat(full_name,first_name);
        printf("%s",full_name);
    }
     
    return (0);
}