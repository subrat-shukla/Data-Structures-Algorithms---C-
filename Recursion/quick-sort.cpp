#include<iostream>
using namespace std;

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];

    int i = l-1;

    for(int j=l; j<r; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1], arr[r]);
    return i+1;
}

void quicksort(int arr[], int l, int r)
{
    if(l < r){
        int pivot = partition(arr, l, r);

        quicksort(arr, l, pivot-1);
        
        quicksort(arr, pivot+1, r);
    }
}

int main()
{
    int n=10;
    int arr[]={5,2,4,9,1,0,10,3,11,7};
    quicksort(arr, 0, n-1);
    cout<<"Array after sorting : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}