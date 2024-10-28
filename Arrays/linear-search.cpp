#include<iostream>
using namespace std;
int search(int arr[], int n, int t)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==t){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,arr[100],i,t;
    cout<<"Enter number of elements in array : "<<endl;
    cin>>n;
    cout<<"Enter numbers :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"What number you want to search ?"<<endl;
    cin>>t;
    
    int found=search(arr,n,t);
    if(found){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}