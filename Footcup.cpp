#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int a,b,i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a==b && (a>0 || b>0))
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}