#include <stdio.h>
int main() 

{
    char ch;
    printf("Enter the character: ");
    scanf(" %c", &ch);

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
    {
        printf("The character %c is a vowel\n", ch);
    } 
    else {
        printf("The character %c is a consonant\n", ch);
    }

    return 0;
}
