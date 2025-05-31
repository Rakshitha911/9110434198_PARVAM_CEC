//
//  sphenic.cpp
//  30 may
//
//  Created by MAHADEV APPU  on 30/05/25.
//
#include <iostream>
using namespace std;
int main()

{
    int n,i,ctr=0;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        if(n%i==0)
        {
            ctr++;
            break;
        }
       
        cout<<ctr<<endl;
}
    if(ctr==8)
    {
        cout<<"it is a sphenic\n";
        
    }
    else
    {
        cout<<"it is not sphenic\n";
    }

    return 0;
}