#include<iostream>
using namespace std;


// array mountain form m hoga, jese ki 0 10 5 2, jisme 10 peak pr h
int peakindex(int arr[], int n)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;

    cout<<"Peak index of given array is : "<<endl;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
           s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    cout<<arr[s];
    return 0;
}

int main()
{
    int n,arr[50];
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    peakindex(arr,n);
}