#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int i,j,n,arr[4];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>arr[j];
        }
        if(arr[0]*arr[1]<=arr[2]*arr[3])
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}

