#include<iostream>
using namespace std;                 
int main()
{
    int n,i,j;
    cout<<"Enter number : ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=n;j>0;j--)
        {
            if(j>=i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
}