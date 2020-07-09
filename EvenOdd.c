#include<stdio.h>

int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d",&n);
    n%2==0? printf("%d is Even", n): printf("%d is Odd", n);
    return 0;
}
