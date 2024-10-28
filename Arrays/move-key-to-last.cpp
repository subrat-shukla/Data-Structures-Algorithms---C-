#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    cout<<"Enter size: "<<endl;
    int size;
    cin>>size;

    cout<<"Enter elements : "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int zeroindex=0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] !=10){
            swap(arr[i], arr[zeroindex]);
            zeroindex++;
        }
    }

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}