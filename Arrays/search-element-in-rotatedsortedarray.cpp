#include<iostream>
using namespace std;
int pivot(int arr[], int n)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
           s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int binarysearch(int arr[], int s, int e, int key)
{
    int start=s;
    int end=e;
    int mid=(start+end)/2;
    
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

        mid=(start+end)/2;
    }
    return -1;
}

int position(int arr[], int n, int k)
{
    int pivotelement=pivot(arr,n);
    
    if(k>=arr[pivotelement] && k<=arr[n-1])
    { //binarysearch on second line
        return binarysearch(arr, pivotelement, n-1, k);
    }
    else
    {  //binarysearch on first line
        return binarysearch(arr, 0, pivotelement-1, k);
    }

    
}
int main()
{
    int arr[5] = {7,9,1,2,3};
    int key;
    cout<<"Enter element to search : "<<endl;
    cin>>key;

    position(arr, 5, key);


    return 0;
}