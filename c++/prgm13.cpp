#include<iostream>
using namespace std;
int main()
{
    int num,digit,rev=0;
    cout<<"enter a number:";
    cin>>num;
    while(num>0)
    {
        digit=num%10;
        cout<<"digit:"<<digit<<'\n';
        num=num/10;
        rev=rev*10+digit;
    }
    cout<<"reversed number is:"<<rev<<endl;
    return 0;
}
