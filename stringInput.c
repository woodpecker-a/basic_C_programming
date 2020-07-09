#include<stdio.h>

int main()
{
    char name[15];
    printf("Enter your name: ");
    gets(name);                         //get the string.
    printf("Name: ");                   // eg. | h | e | l | l | o |  | w | o | r | l | d | /0
    puts(name);                         //print the string.

    return 0;
}
