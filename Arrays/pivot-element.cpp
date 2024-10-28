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
    return arr[s];
}

int main()
{
    int arr[5]={1,2,3,7,6};
    cout<<"Pivot element is : "<<pivot(arr,5)<<endl;
}