#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[10];
    printf("Enter a word: ");
    scanf("%s", s);
    printf("Converted: ");
    if (islower(s[0]))
    {
        for (int i = 0; i < strlen(s); i++)
        {
            printf("%c",tolower(s[i]));
        }
    }
    else{
        for (int i = 0; i < strlen(s); i++)
        {
            printf("%c",toupper(s[i]));
        }
    }
    return 0;
}
