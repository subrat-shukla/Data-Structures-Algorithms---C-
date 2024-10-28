#include<iostream>
using namespace std;
int sort(int arr[],int n)
{
    int i=0,j=n-1;
    while(i<j){
        while(arr[i]==0){
            i++;
        }
        while(arr[j]==1){
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}
int main()
{
    int arr[8]={1,1,0,0,0,0,1,0};
    // cout<<"Enter size of array : "<<endl;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }

    sort(arr,8);

    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}