#include<iostream>
using namespace std;                 
int main()
{
    int n,i,j;
    cout<<"Enter number : ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        int space=i-1;
        while(space>0)
        {
            cout<<" ";
            space--;
        }
        for(j=i;j<=n;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
}
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
