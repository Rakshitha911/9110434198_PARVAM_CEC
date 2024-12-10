//c program to generate fibonacci series of N numbers
#include<stdio.h>
int main()
{
    int f0=0,f1=1,counter=1,n=0;
    printf("%d",&n);
    while(counter<=n)
    {
        int f2=f0+f1;
        printf("%d",f0);
        f0=f1;
        f1=f2;
        counter++;
    }
    return 0;
}

