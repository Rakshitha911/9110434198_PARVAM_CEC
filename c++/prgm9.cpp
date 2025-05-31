#include<iostream>
using namespace std;
int main()
{
    int p;
    float r,t,in;
    cout<<"enter the principle value:";
    cin>>p;
    while(p%1000!=0)
    {
        cout<<"invalid principle amount(multiple of 1000)";
        cin>>p;
    }
    cout<<"enter the rate value:";
    cin>>r;
    while(r!=(float)r)
    {
        cout<<"invalid rate .please enter multiple of 1";
        cin>>r;
    }
    cout<<"enter the time value:";
    cin>>t;
    while(t!=(float)t)
    {
        cout<<"invalid the time period.please enter multiple of 1";
        cin>>t;
    }
    cout<<"enter the time value:";
    cin>>t;
    while(t!=(float)t)
    {
        cout<<"invalid the time period.please enter multiple of 1";
        cin>>t;
    }
    in=(p*t*r)/100;
    cout<<"simple intrest"<<in<<endl;
    cout<<"total amount"<<p+in<<endl;
    return 0;
}