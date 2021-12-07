#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int i,j,num;
	char arr1[3],res,a,b;
	
	cin>>num;
	for(j=0;j<num;j++)
	{
	for(i=0;i<3;i++)
	{
		cin>>arr1[i];
	}
	cin>>a>>b;

	if(a==arr1[0] || b==arr1[0])
			{
				res=arr1[0];
				
			}
	else if(a==arr1[1] || b==arr1[1])
	{
		res=arr1[1];
	}
			
	cout<<res<<endl;
}

	return 0;
}
