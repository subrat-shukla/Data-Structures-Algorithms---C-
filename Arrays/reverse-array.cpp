#include<iostream>
using namespace std;
int reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return arr[n];
}

int main()
{
    int n,arr[100],i;
    cout<<"Enter no. of elements in array : "<<endl;
    cin>>n;
    cout<<"Enter numbers : "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Reversed array : "<<endl;
    
    reverse(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
  
    return 0;
}