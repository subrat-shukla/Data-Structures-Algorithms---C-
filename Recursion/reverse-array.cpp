#include<iostream>
using namespace std;

void reverse(int i, int arr[], int n)
{
    if(i>=n/2)  return;

    swap(arr[i], arr[n-i-1]);

    reverse(i+1, arr, n);
}

int main()
{
    int size;
    cout<<"Enter size : "<<endl;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++)   cin>>arr[i];

    reverse(0, arr, size);

    for(int i=0; i<size; i++)   cout<<arr[i]<<" ";
}