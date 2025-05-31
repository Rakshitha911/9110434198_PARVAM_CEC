#include<iostream>
using namespace std;
int main()
{
    int n,binary[40],i=0;
    cout<<"enter a deecimal number:";
    cin>>n;
    while(n>0)
    {
        binary[i]=n%2;
        n/=2;
        i++;
    }
    cout<<"binary representation:";
     for(int j=i-1;j>=0;j--)
     {
        cout<<binary[j];
     }
     cout<<endl;
     return 0;
}