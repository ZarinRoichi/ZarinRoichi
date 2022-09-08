//1.vowel/consonant
#include<stdio.h>
int main()
{
    char c;
    scanf("%d",&c);
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    printf("Uppercase_vowel");
    else if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    printf("Lowercase_vowel");
    else
    printf("Consonant");
    return 0;
}

