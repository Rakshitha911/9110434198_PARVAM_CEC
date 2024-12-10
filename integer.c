#include<stdio.h>
int main()
{
    int x=0;
    printf("enter a variable");
    scanf("%d",&x);
    if(x>0)
    {
        printf(" the given integer is positive");
    }
    else
    {
        printf("the given integer is negative");
    }
    return 0;
} 