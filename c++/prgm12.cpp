#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
    int n1,n2,res;
    char op;
     cout<< "enter operation (+,-,/,%,*):";
    cin >>op;
    cout<< " enter value for n1:";
    cin >> n1;
    cout<< "enter value for n2:";
    cin >> n2;
    switch(op)
    {
        case '+':
        res=n1+n2;
        break;
         case '-':
        res=n1-n2;
        break;
         case '/':
        res=n1/n2;
        break;
         case '%':
        res=n1%n2;
        break;
         case '*':
        res=n1*n2;
        break;
        default:
        cout<<"error. operator is not correct";
    }
    cout<<"result:"<<res;
    return 0;    

}