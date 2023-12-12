/*

        Write a program which converts a word of C++ program to its equivalent token.

                RESULT:

                    Input: 646.45
                    Output: Float

                    Input: do
                    Output: Keyword

                    Input: 554
                    Output: Integer

                    Input: abc
                    Output: Identifier

                    Input: +
                    Output: Arithmetic Operator

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
        if(str[i] == '_' || str[i] == '.') continue;

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


bool isArithmeticOP(string op)
{
    if(op == "+" || op == "-" || op == "*" || op == "/" || op == "%" || op == "^" || op == "=") return true;

    return false;
}

bool isRelationalOP(string op)
{
    if(op == "<" || op == ">" || op == "!=" || op == "==" || op == "<=" || op== ">=") return true;

    return false;
}

int isIntOrFloat(string str)
{
    int cnt = 0;

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '.')
        {
            cnt++;
        }
        else if(!isdigit(str[i]))
        {
            return -1;
        }
    }

    if(cnt == 1) return 2;

    if(cnt == 0) return 1;

    return 0;
}

void checker(string str)
{
    if(isOther(str) && !isArithmeticOP(str) && !isRelationalOP(str))
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
    else if(isArithmeticOP(str))
    {
        printf("Arithmetic Operator\n");
    }
    else if(isRelationalOP(str))
    {
        printf("Relational Operator\n");
    }
    else
    {
        int temp = isIntOrFloat(str);

        if(temp == 1)
        {
            printf("Integer\n");
        }
        else if(temp == 2)
        {
            printf("Float\n");
        }
        else
        {
            printf("Undefined\n");
        }
    }
}


int main()
{
    string str;
    cin >> str;

    printf("\n\tInput\t:\t");
    cout << str;
    printf("\n\tOutput\t:\t");

    checker(str);

    return 0;
}

