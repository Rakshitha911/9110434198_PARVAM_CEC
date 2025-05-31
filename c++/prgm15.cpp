#include<iostream>
using namespace std;
int main()
{
    int m,n,temp;
    cout<<"enter a for m number:";
    cin>>m;
    cout<<"enter a for n number:";
    cin>>n;
    cout<<"before swaping m:"<<m<<endl;
    cout<<"before swaping n:"<<n<<endl;
    temp=m;
    m=n;
    n=temp;
    cout<<"after swaping m:"<<m<<endl;
    cout<<"after swaping n:"<<n<<endl;
    return 0;
}