//fast sorting algorithm
#include<iostream>
using namespace std;
void merge(int arr[], int s, int mid, int e)
{
    int n1 = mid-s+1;
    int n2 = e-mid;

    int a[n1],b[n2]; //two small arrays which will be merged to give final sorted array 

    for(int i=0;i<n1;i++){
        a[i]=arr[s+i];
    }
    for(int j=0;j<n2;j++){
        b[j]=arr[mid+1+j];
    }

    //loop to store values of small arrays into original array
    int i=0,j=0,k=s;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++; i++;
        }
        else{
            arr[k]=b[j];
            k++; j++;
        }
    }
    //loop if pointers reached last location and elements still left
    while(i<n1){
        arr[k]=a[i];
        k++; i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++; j++;
    }
}
void mergesort(int arr[], int s, int e)
{
    if(s>=e)  // base case
        return;
    
    //leftpart sort
    int mid = s+(e-s)/2;
    mergesort(arr, s, mid);

    //rightpart sort
    mergesort(arr, mid+1, e);

    //merge
    merge(arr, s, mid, e);
}

int main()
{
    int arr[5]={5,2,4,9,1};
    int n=5;
    mergesort(arr, 0, n-1);
    cout<<"Array after sorting : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}