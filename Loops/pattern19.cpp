#include<iostream>
using namespace std;                 
int main()
{
    int n,i,j;
    cout<<"Enter number : ";
    cin>>n;
    int count = 1;
    for(i=n; i>0; i--)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i){
                cout<<count;
                count++;
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
}