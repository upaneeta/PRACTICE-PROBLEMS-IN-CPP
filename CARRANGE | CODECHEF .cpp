#include<iostream>
using namespace std;


int main(){

int i,num,arr[3],sol_arr[100000];

cin>>num;

for(i=0;i<num;i++)
{
	cin>>arr[0]>>arr[1]>>arr[2];
	sol_arr[i]=((arr[1]-(arr[0]-1))*arr[2]);
}
for(i=0;i<num;i++)
{
	cout<<sol_arr[i]<<endl;
}
return 0;
}
