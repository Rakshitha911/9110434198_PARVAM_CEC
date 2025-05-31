#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter a for m number:";
    cin>>m;
    cout<<"before swaping n number:";
    cin>>n;
    cout<<"before swaping m:"<<m<<endl;
    cout<<"before swaping n:"<<n<<endl;
    m=m*n;
    n=m/n;
    m=m/n;
    cout<<"after swaping m:"<<m<<endl;
    cout<<"after swaping n:"<<n<<endl;
    return 0;
}