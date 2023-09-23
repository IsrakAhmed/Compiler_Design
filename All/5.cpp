/*

        Build a lexical analyzer implementing the following regular expressions:

            Float variable = (a-hA-Ho-zO-Z)(a-zA-Z0-9)*
            Float Number = 0.(0-9)(0-9)|(1-9)(0-9)*.(0-9)(0-9)
            Double Number = 0.(0-9)(0-9)(0-9)+|(1-9)(0-9)*.(0-9)(0-9)(0-9)+
            Invalid Input or Undefined = Otherwise

*/


#include<bits/stdc++.h>

using namespace std;

bool isOther(string s)
{
    for(int i=0; i < s.size(); i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') || s[i] == '.')
        {
            continue;
        }

        else
        {
            return 1;
        }
    }
    return 0;
}

int isFloat(string s)
{
    int cnt = 0,i;

    for(i = 0; s[i] != '.'; i++)
    {
        if(s[i] < '0' || s[i] > '9') return 0;
    }

    for(i++; i < s.size(); i++)
    {
        if(s[i] < '0' || s[i] > '9') return 0;
        cnt++;
    }

    return cnt;
}

int main()
{

    string s;
    cin >> s;


    if(isOther(s))
    {
        printf("Undefined\n");
    }

    else if((s[0] >= 'a' && s[0] <= 'h') || (s[0] >= 'A' && s[0] <= 'H') || (s[0] >= 'o' && s[0] <= 'z') || (s[0] >= 'O' && s[0] <= 'Z'))
    {
        printf("Float Variable\n");
    }

    else if((isFloat(s) == 2 || isFloat(s) == 1) && ((s[0] >= '1' && s[0] <= '9') || s[0] == '.'))
    {
        printf("Float Number\n");
    }

    else if(isFloat(s) > 2 && (s[0] >= '1' && s[0] <= '9' || s[0] == '.'))
    {
        printf("Double Number\n");
    }

    else
    {
        printf("Undefined\n");
    }

    return 0;
}
