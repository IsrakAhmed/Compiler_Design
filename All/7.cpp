/*

        Write a program to recognize C++

                (i)      Keyword
                (ii)     Identifier
                (iii)    Operator
                (iv)     Constant

*/


#include<bits/stdc++.h>

using namespace std;

string keywords[32]= {"auto","double","int","struct","break","else","long",
                      "switch","case","enum","register","typedef","char",
                      "string","return","union","const","float","short",
                      "unsigned","continue","for","signed","void","default",
                      "goto","sizeof","voltile","do","if","static","while"
                     };


bool isKeyword(string st)
{
    for(int i = 0; i<32; i++)
    {
        if(keywords[i]==st) return true;
    }
    return false;
}

bool isOther(string str)
{
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == '_') continue;

        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
        {
            continue;
        }
        else
        {
            return true;
        }
    }
    return false;
}


bool isOP(string op)
{
    if(op == "+" || op == "-" || op == "*" || op == "/" || op == "%" || op == "^" || op == "=") return true;

    else if(op == "<" || op == ">" || op == "!=" || op == "==" || op == "<=" || op== ">=") return true;

    return false;
}

bool isConstant(string s)
{
    for(int i=0; i < s.size(); i++)
    {
        if((s[i] >= '0' && s[i] <= '9') || s[i] == '.')
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

void checker(string str)
{
    if(isOther(str) && !isOP(str))
    {
        printf("Undefined\n");
    }
    else if(isKeyword(str))
    {
        printf("Keyword\n");
    }
    else if(str[0] == '_' || isalpha(str[0]))
    {
        printf("Identifier\n");
    }
    else if(isOP(str))
    {
        printf("Operator\n");
    }
    else if(isConstant(str))
    {
        printf("Constant\n");
    }
    else{
        printf("Undefined\n");
    }
}


int main()
{
    string str;
    cin >> str;

    printf("\n");

    checker(str);

    return 0;
}

