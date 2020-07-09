#include<stdio.h>

int main()
{
    int *ptr, q;
    q = 50;
    ptr = &q;           //address of q assigned to ptr
    printf("%d", *ptr); //displaying *ptr address's value

    return 0;
}
