#include<iostream>
using namespace std;
int main()
{
    int n,arr[10],i,sum=0;
    cout<<"Enter number of elements in array : "<<endl;
    cin>>n;
    cout<<"Enter numbers :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"Sum of all elements of array is : "<<sum<<endl;
    return 0;
}