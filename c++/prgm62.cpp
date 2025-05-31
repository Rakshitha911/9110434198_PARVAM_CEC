# include <iostream>
using namespace std;
int main(){
    int x,remainder,reverse=0,temp;
    cout << "enter the number "<<  endl;
    cin >> x;
    temp=x;
    while (x > 0)
    {
        remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x /= 10;
    }
    cout << "the given number is : "<< temp << endl;
    cout << "its reverse is :"<<reverse<<endl;
    if(temp == reverse){
        cout << "the given number is palindrome"<< endl;
        
    }
    else {
        cout << "the given number is not a palindrome "<< endl;
    } 
    return 0;
}