/*

        Build a lexical analyzer implementing the following regular expressions:

            Character variable =ch_(a-zA-Z0-9)(a-zA-Z0-9)*
            Binary variable = bn_(a-zA-Z0-9)(a-zA-Z0-9)*
            Binary Number = 0(0|1)(0|1)*
            Invalid Input or Undefined = Otherwise

*/


#include<bits/stdc++.h>

using namespace std;

bool isBinary(string s)
{
    if(s.size() < 2) return false;

    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] != '0' && s[i] != '1') return false;
    }

    return true;
}

bool isValid(string s)
{
    if(s.size() < 4) return false;

    for(int i = 3; i < s.size(); i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            continue;
        }

        else
        {
            return false;
        }
    }

    return true;
}

int main()
{

    string s;
    cin >> s;

    if(s[0] == 'c' && s[1] == 'h' && s[2] == '_' && isValid(s))
    {
        printf("Character Variable\n");
    }

    else if(s[0] == 'b' && s[1] == 'n' && s[2] == '_' && isValid(s))
    {
        printf("Binary Variable\n");
    }

    else if(s[0] == '0' && isBinary(s))
    {
        printf("Binary Number\n");
    }

    else
    {
        printf("Undefined\n");
    }

    return 0;
}
