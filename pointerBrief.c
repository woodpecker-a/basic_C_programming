#include<stdio.h>

int main()
{
    int *ip;
    int var = 20;
    ip = &var;
    printf("Address of VAR variable: %x\n", &var);      // %x define hexa values
    printf("Address stored in IP variable: %x\n", ip);
    printf("Value of *ip variable: %d\n", *ip);

    return 0;
}
