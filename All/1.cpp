/*
    1. Write a C program that read the following sing:
            “Md. Tareq Zaman, Part-3, 2011”
            a) Count number of words, letters, digits and other characters.
            b) Separates letters, digits and others characters.
*/


#include<bits/stdc++.h>

using namespace std;

bool is_digit(char ch)
{
    if(ch >= '0' && ch <= '9') return true;
    return false;
}

bool is_char(char ch)
{
    if(ch >= 'A' && ch <= 'Z') return true;
    if(ch >= 'a' && ch <= 'z') return true;
    return false;
}


int main()
{
    string s;
    getline(cin,s);

    string letters, digits, others;

    int wordCount = 1, letterCount = 0, digitCount = 0, othersCount = 0;

    int i;
    for(i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ' && (is_char(s[i + 1]) || is_digit(s[i + 1])))
        {
            wordCount++;
        }
        if(is_char(s[i]))
        {
            letters.push_back(s[i]);
            letters.push_back(' ');
            letterCount++;
        }

        if(is_digit(s[i]))
        {
            digits.push_back(s[i]);
            digits.push_back(' ');
            digitCount++;
        }

        if(!is_digit(s[i]) && !is_char(s[i]))
        {
            others.push_back(s[i]);
            others.push_back(' ');
            othersCount++;
        }
    }

    printf("\n\n  (a):\n");
    printf("\tNumber of Words : %d\n",wordCount);
    printf("\tNumber of Letters : %d\n",letterCount);
    printf("\tNumber of Digit : %d\n",digitCount);
    printf("\tNumber of Other Characters : %d\n",othersCount);


    printf("\n\n  (b):\n");
    cout << "\tLetters : " << letters << "\n";
    cout << "\tDigits : " << digits << "\n";
    cout << "\tOthers : " << others << "\n";

    return 0;
}
