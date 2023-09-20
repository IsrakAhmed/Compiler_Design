/*

        Build a lexical analyzer implementing the following regular expressions:

            Integer variable = (i-nI-N)(a-zA-Z0-9)*
            ShortInt Number = (1-9)|(1-9)(0-9)|(1-9)(0-9)(0-9)|(1-9)(0-9)(0-9)(0-9)
            LongInt Number = (1-9)(0-9)(0-9)(0-9)(0-9)+
            Invalid Input or Undefined = Otherwise

*/


#include<bits/stdc++.h>

using namespace std;

bool isOther(string s)
{
    int i;

    for(i = 0; i < s.size(); i++)
    {
        if(!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')))
        {
            return 1;
        }
    }
    return 0;
}

bool isAllDigit(string s)
{
    int i;

    for(i = 0; i < s.size(); i++)
    {
        if(s[i] < '0' || s[i] > '9') return 0;
    }
    return 1;
}

int main()
{

    string s;

    getline(cin,s);


    if(isOther(s))
    {
        printf("Undefined\n");
    }

    else if((s[0] >= 'i' && s[0] <= 'n') || (s[0] >= 'I' && s[0] <= 'N'))
    {
        printf("Integer Variable\n");
    }

    else if(isAllDigit(s) && (s[0] >= '1' && s[0] <= '9') && s.size() <= 4)
    {
        printf("Short Integer\n");
    }

    else if(isAllDigit(s) && (s[0] >= '1' && s[0] <= '9'))
    {
        printf("Long Integer\n");
    }

    else
    {
        printf("Undefined\n");
    }

    return 0;
}
