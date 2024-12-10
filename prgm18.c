//sum of the array elements
#include<stdio.h>
int main() 
{
    int a[]={1,2,3,4,5},sum=0;
    for(int i=0;i<5;i++){
    sum+=a[i];
    }
    printf("sum:%d\n",sum);
    return 0;
}