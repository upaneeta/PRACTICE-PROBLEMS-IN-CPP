#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,n,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {   cin>>a>>b>>c>>d;
        if((a==c || a==d) && (b==c ||b==d))
        {
            count=0;
        }
        else if((a!=c && a!=d) && (b==c ||b==d) ||(b!=c && b!=d) && (a==c ||a==d))
        {
            count=1;
        }
        else
        {   
            count=2;
        }
        cout<<count<<endl;
    }
}