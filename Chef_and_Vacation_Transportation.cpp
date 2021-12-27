#include<iostream>
#include<stdio.h>
using namespace std;

int i,j,n,arr[3];

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[j];
        }
        if(arr[0]+arr[1]<arr[2])
        {
            cout<<"PLANEBUS";
        }
        else if(arr[0]+arr[1]>arr[2])
        {
            cout<<"TRAIN";
        }
        else{
            cout<<"EQUAL";
        }
    }

}