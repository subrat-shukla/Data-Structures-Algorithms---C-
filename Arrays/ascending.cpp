#include<iostream>
using namespace std;
int main()
{
    int i,j,n,num,arr[100];
    cout<<"Enter number of elements : "<<endl;
    cin>>n;
    cout<<"Enter elements :"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    cout<<"Array in ascending order : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}