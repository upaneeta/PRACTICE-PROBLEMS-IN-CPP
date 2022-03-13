#include <iostream>
using namespace std;

int main() {
	// your code goes here

int i,a,b,c,ans,n;
cin>>n;

for(i=0;i<n;i++)
{
    cin>>a>>b;
    if(a==0 || b==0)
    {
        ans=0;
    }
    
    if(a<b)
    {
        ans=0;
    }
    else if(b<a)
    {
        ans=a/(2*b);
    }
    else if(a==b)
    {
        ans=0;
    }
    
    //c=a<b?b/(2*a):a/(2*b);
    cout<<ans<<endl;

}
	return 0;
}