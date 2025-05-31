#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the a value:";
    cin>>a;
     cout<<"enter the b value:";
    cin>>b;
     cout<<"enter the c value:";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"largest number is:"<<a<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"largest number is:"<<b<<endl;
    }
    else
    {
        cout<<"largest number is:"<<c<<endl;
    }
    return 0;

}
