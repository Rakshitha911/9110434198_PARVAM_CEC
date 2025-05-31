#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the number of input:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cout<<"enter a number"<<i+1<<":";
        cin>>num;
        sum+=num*num;
    }
    cout<<"sum of square of numbers is:"<<sum<<endl;
    return 0;
}