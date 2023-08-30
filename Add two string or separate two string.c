/*
    Also write  a C program that can add two string into one or separate a string into two string.
*/

#include<stdio.h>
#include<string.h>

int main(){
    /*

    // Adding Two String

    char a[25],b[25];

    gets(a);
    gets(b);

    strcat(a,b);

    printf("%s\n",a);

    */

    // Separating one string

    char a[25],b[25],c[25];

    gets(a);

    int index;
    printf("Enter the separation index : ");

    scanf("%d",&index);

    strncpy(b,a+index,strlen(a));
    strncpy(c,a,strlen(a)-index);

    printf("First string : %s\n",c);
    printf("Second string : %s\n",b);

    return 0;
}
