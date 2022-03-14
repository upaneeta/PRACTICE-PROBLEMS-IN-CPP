#include <iostream>
using namespace std;

int main() {
	// your code goes here

int i,n,j;
char str1[5],str2[5],ans[5];
cin>>n;

for(i=0;i<n;i++)
{
    for(j=0;j<5;j++)
    {
        cin>>str1[j];
    }
    for(j=0;j<5;j++)
    {
        cin>>str2[j];
    }
    for(j=0;j<5;j++)
    {   if(str1[j]==str2[j])
        {
            ans[j]='G';
        }
        else
        {
            ans[j]='B';
        }
    }
    for(j=0;j<5;j++)
    {
        cout<<ans[j];
    }

}
	return 0;
}