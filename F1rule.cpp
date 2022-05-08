#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,a,b,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if (b<=1.07*a)
        {
            cout<<"YES"<<endl;;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
