#include<iostream>
using namespace std;                 
int main()
{
    int n,i,j;
    cout<<"Enter number : ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(j=2; j<=i; j++){
            cout<<i-j+1;
        }
        cout<<endl;
    }
    
}