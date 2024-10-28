#include<iostream>
using namespace std;
void selection(int arr[], int n)
{
    if(n<=1) //base case already sorted
        return ;

    int min=arr[0];
    int ind=0;
    for(int i=0;i<n;i++)
    {
            if(arr[i] < min){
                min=arr[i];
                ind=i;
            }
    }
    swap(arr[0], arr[ind]);
    return selection(arr+1,n-1);
}

int main()
{
    int arr[5]={5,2,4,9,1};
    
    selection(arr, 5);
    cout<<"Array after sorting : "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}