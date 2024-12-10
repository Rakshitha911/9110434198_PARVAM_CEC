//sum of odd and even numbers of the array elements
#include<stdio.h>
int main() 
{
    int a[]={1,2,3,4,5},esum=0,osumm=0;
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            esum=a[i]%2==0 ?esum+a[i]:esum ;
            osum=a[i]%2==0 ?osum+a[i]:osum ;
        }
    }
    printf("esum:%d\n",esum);
    printf("osum:%d\n",osum);
    return 0;
}