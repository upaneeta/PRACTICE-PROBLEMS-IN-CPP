#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int i,j,n,X,C=0,D=0,N=0,C_score=0,N_score=0;
    char arr[14];
    cin>>n;
    for(i=0;i<n;i++)
    {   cin>>X;
        for(j=0;j<14;j++)
        {
            cin>>arr[j];
            if (arr[j]=='C')
            {
                C++;
            }
            else if(arr[j]=='N')
            {
                N++;
            }
            else 
            {
                D++;
            }
        }
        C_score=(C*2)+(D*1)+(0*N);
        //cout<<C_score<<endl;
        N_score=(N*2)+(D*1)+(0*C);
        //cout<<N_score<<endl;
        if(C_score<N_score)
        {
            cout<<(40*X)<<endl;
        }
        else if(N_score<C_score)
        {
            cout<<60*X<<endl;
        }
        else if(C_score==N_score)
        {   
            cout<<55*X<<endl;
        }
        C=0;
        D=0;
        N=0;
    }
    return 0;
}
