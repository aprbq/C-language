#include <stdio.h>
void check_letter(char);
void check_vowel(char);
char to_uppercase(char);
char to_lowercase(char);
int main(void) {
    char y;
    printf("Enter a letter: ");
    scanf(" %c",&y);
    check_letter(y);
    return 0;
}
void check_letter(char ch) {
    if((ch >= 'a' && ch <= 'z'))
    {
        printf("%c is converted to %c.\n",ch,to_uppercase(ch));
        check_vowel(ch);
    }
    else if((ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is converted to %c.\n",ch,to_lowercase(ch));
        check_vowel(ch);
    }
    else {
        printf("%c is not letter.\n",ch);
    }
}
void check_vowel(char ch) {
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    {
        printf("%c is a vowel.\n",ch);
    }
    else 
    {
        printf("%c is a consonant.\n",ch);
    }
}
char to_uppercase(char ch) {
        ch = ch-32;
        return ch;
}
char to_lowercase(char ch) {
        ch = ch+32;
        return ch;
}

