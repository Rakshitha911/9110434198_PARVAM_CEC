#include<stdio.h>
int main()
{
    int number,sum=0;
    printf("enter an integer:");
    scanf("%d",&number);
    if(number<0) {
       number = -number;
    }
    for(; number != 0; number /=10)
    {
        sum += number % 10;
    }
    printf("sum of digits =%d\n",sum);
    return 0;
}