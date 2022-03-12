#include <iostream>
using namespace std;

int main() {
	// your code goes here

int i,a,b,c,ans,n;
cin>>n;

for(i=0;i<n;i++)
{
    cin>>a>>b>>c;
    if(a>=b && a>=c)
    {
        ans=a;
    }
    else if(b>=a && b>=c)
    {
        ans=b;
    }
    else if(c>=a && c>b)
    {
        ans=c;
    }

    cout<<ans<<endl;

}
	return 0;
}
