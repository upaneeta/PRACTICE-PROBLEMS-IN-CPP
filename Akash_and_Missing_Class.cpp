#include <iostream>
using namespace std;

int main() {
	// your code goes here

int i,a,ans1,ans2,ans,n;
cin>>n;

for(i=0;i<n;i++)
{
    cin>>a;
    ans1=a/7;
    ans2=a%7;
    if(ans2==6)
    {
        ans=ans1+1;
    }
    else{
        ans=ans1;
    }
    //c=a<b?b/(2*a):a/(2*b);
    cout<<ans<<endl;

}
	return 0;
}