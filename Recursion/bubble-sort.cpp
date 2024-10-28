#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
    if(n==0 || n==1) //base case already sorted
        return ;

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }
    sort(arr,n-1);
}
int main()
{
    int arr[5]={5,2,4,9,1};
    
    sort(arr, 5);
    cout<<"Array after sorting : "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}