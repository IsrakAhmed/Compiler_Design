/*

    Write a program that read the following string:

        “Munmun is the student of Computer Science & Engineering”.

        a) Count how many vowels and Consonants are there?
        b) Find out which vowels and consonants are existed in the above string?
        c) Divide the given string into two separate strings, where one string only contains
           the words started with vowel, and another contains the words started with consonant.

*/


#include<bits/stdc++.h>

using namespace std;

bool is_char(char ch)
{
    if(ch >= 'A' && ch <= 'Z') return true;
    if(ch >= 'a' && ch <= 'z') return true;
    return false;
}

bool isVowel(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') return true;
    return false;
}

// if characters are repeated
/*bool doesExits(string s, char ch){
    int i;
    for(i = 0; i < s.size(); i++){
        if(s[i] == ch){
            return true;
        }
    }
    return false;
}*/

int main()
{
    string s,vowels,consonants;
    getline(cin,s);

    int vowelsCount = 0;
    int consonantsCount = 0;

    int i;
    for(i = 0; i < s.size(); i++)
    {
        if(is_char(s[i]))
        {
            if(isVowel(s[i]))
            {
                vowelsCount++;
                //if(!doesExits(vowels,s[i]))
                {
                    vowels.push_back(s[i]);
                    vowels.push_back(' ');
                }
            }
            else
            {
                consonantsCount++;
                //if(!doesExits(consonants,s[i]))
                {
                    consonants.push_back(s[i]);
                    consonants.push_back(' ');
                }
            }
        }
    }


    cout << "\n\n  (a) : \n";
    cout << "\tNumber of Vowels : " << vowelsCount << "\n";
    cout << "\tNumber of Consonants : " << consonantsCount << "\n";


    cout << "\n\n  (b) : \n";
    cout << "\tVowels : " << vowels << "\n";
    cout << "\tConsonants : " << consonants<< "\n";


    string vowelWords,consonantWords;

    for(i = 0; i < s.size(); i++)
    {
        if(isVowel(s[i]))
        {
            while(s[i] != ' ')
            {
                if(i == s.size())
                {
                    break;
                }
                vowelWords.push_back(s[i]);
                i++;
            }
            vowelWords.push_back(s[i]);
        }
        else
        {
            while(s[i] != ' ')
            {
                if(i == s.size())
                {
                    break;
                }
                consonantWords.push_back(s[i]);
                i++;
            }
            consonantWords.push_back(s[i]);
        }
    }

    cout << "\n\n  (c) : \n";
    cout << "\tWords Started With Vowels : " << vowelWords << "\n";
    cout << "\tWords Started With Consonants : " << consonantWords<< "\n";

    return 0;
}
