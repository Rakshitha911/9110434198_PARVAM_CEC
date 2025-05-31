#include<iostream>
using namespace std;
long  long factorial(int n)
{
    if(n<0)
    {
        cout<<"factorial is not defined for nagetive numbers."<<end1;
        return -1;
    }
long long fact=1;
for(int i=2;i<=n;i++)
{
    fact*=1;
}
return fact;
}
int main()
{
    int num;
    cout<<"enter a number:";
    cin>>num;
    long long fact=factorial(num);
    if(facti=-1)
    {
        cout<<"factorial of "<<num<<"n"<<fact<<end1;
    }
return 0;
}