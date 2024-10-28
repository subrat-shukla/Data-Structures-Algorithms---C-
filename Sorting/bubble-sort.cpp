#include<iostream>
using namespace std;
#define n 5

int bubble_sort(int arr[])
{
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i] > arr[j])
                swap(arr[i], arr[j]);

    return arr[n];
}

int main()
{
    int arr[n];
    cout<<"Enter array elements : "<<endl;

    for(int i=0; i<n; i++)  
        cin>>arr[i];

    bubble_sort(arr);

    cout<<"Array after sorting : "<<endl;
    for(int i=0; i<n; i++)  
        cout<<arr[i]<<" ";

    return 0;
}