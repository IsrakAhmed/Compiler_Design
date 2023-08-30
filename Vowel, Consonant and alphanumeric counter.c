/*
    Write a C program that can count no of vowel, consonant, alphanumeric value form a string including space.
*/

#include<stdio.h>
#include<string.h>

int main(){

    char s[100];
    gets(s);

    int size = strlen(s);

    int i;
    int vowels = 0;
    int consonant = 0;
    int spaces = 0;
    int numbers = 0;
    int others = 0;

    for(i = 0; i < size; i++){
        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U'){
            vowels++;
        }
        else if(s[i] == ' '){
            spaces++;
        }
        else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            consonant++;
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            numbers++;
        }
        else{
            others++;
        }
    }

    printf("Vowels : %d\n",vowels);
    printf("Consonant : %d\n",consonant);
    printf("Numbers : %d\n",numbers);
    printf("Spaces : %d\n",spaces);
    printf("Others : %d\n",others);

    return 0;
}
