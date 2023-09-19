/*

        Write a program that abbreviates the following code:

            CSE-3141 as Computer Science & Engineering, 3rd year, 1st semester, Compiler Design, Theory.

*/


#include<bits/stdc++.h>

using namespace std;

void print()
{
    printf("\n\nAbbreviation : \n\n\tComputer Science & Engineering, 3rd year, 1st semester, ");
}

int main()
{

    printf("\nEnter a Course Code in Upper Case with no space: ");

    string courseCode;
    cin >> courseCode;

    if(courseCode == "CSE-3111")
    {
        print();
        printf("Software Engineering, Theory\n");
    }

    else if(courseCode == "CSE-3112")
    {
        print();
        printf("Software Engineering, Lab\n");
    }

    else if(courseCode == "CSE-3121")
    {
        print();
        printf("Database Management Systems, Theory\n");
    }

    else if(courseCode == "CSE-3122")
    {
        print();
        printf("Database Management Systems, Lab\n");
    }

    else if(courseCode == "CSE-3131")
    {
        print();
        printf("Web Engineering, Theory\n");
    }

    else if(courseCode == "CSE-3132")
    {
        print();
        printf("Web Engineering, Lab\n");
    }

    else if(courseCode == "CSE-3141")
    {
        print();
        printf("Compiler Design, Theory\n");
    }

    else if(courseCode == "CSE-3142")
    {
        print();
        printf("Compiler Design, Lab\n");
    }

    else if(courseCode == "CSE-3151")
    {
        print();
        printf("Engineering Ethics and Environment Protection, Theory\n");
    }

    else if(courseCode == "ICE-3161")
    {
        printf("\n\nAbbreviation : \n\n\tInformation & Communication Engineering, 3rd year, 1st semester, ");
        printf("Communication Engineering, Theory\n");
    }

    else if(courseCode == "CSE-3162")
    {
        print();
        printf("Mobile Application Development, Lab\n");
    }

    else
    {
        printf("\n\tInvalid Course Code\n");
    }

    return 0;
}
