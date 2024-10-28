#include<iostream>
using namespace std;                 
int main()
{
    int n,i,j,k,spc;
    cout<<"Enter number : ";
    cin>>n;
    
    for(i=1;i<=n;i++)
   {
      for(j=n; j>=1; j--)
      {
         if(i>=j)
            cout<<"* ";
         else
            cout<<" ";
      }
      cout<<endl;
   }
   return 0;
}