#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int n,p,q;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>p>>q;
        if(p>=q)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

}