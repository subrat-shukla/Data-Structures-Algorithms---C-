#include<iostream>
using namespace std;
void insertion(int arr[], int n)
{
    if(n<=1) //base case already sorted
        return ;

    insertion(arr,n-1);

    int key = arr[n-1];
    int j = n-2;

    while (j>=0 && arr[j] > key)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1]=key;
}
int main()
{
    int arr[5]={5,2,4,9,1};
    
    insertion(arr, 5);
    cout<<"Array after sorting : "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}