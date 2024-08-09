#include <stdio.h>
#include <string.h>

void encryption(char *, int);
void decryption(char *, int);

int main()
{
    char s[50];
    printf("Enter a word: ");
    scanf("%s", s);
    encryption(s, strlen(s));
    decryption(s, strlen(s));
    return 0;
}

void encryption(char *s1, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (s1[i]>='A' && s1[i]<='Z')
        {
            s1[i] = (s1[i] - 'A' + 3) % 26 + 'A'; 
        }
        else if (s1[i]>='a'&& s1[i]<='z')
        {
            s1[i] = (s1[i] - 'a' + 3) % 26 + 'a'; 
        }
    }
    printf("Encryption a word: %s",s1);
}

void decryption(char *s1, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (s1[i]>='A' && s1[i]<='Z')
        {
            s1[i] = (s1[i] - 'A' - 3 + 26) % 26 + 'A'; 
        }
        else if (s1[i]>='a' && s1[i]<='z')
        {
            s1[i] = (s1[i] - 'a' - 3 + 26) % 26 + 'a'; 
        }
    }
    printf("\nDecryption a word: %s",s1);
}