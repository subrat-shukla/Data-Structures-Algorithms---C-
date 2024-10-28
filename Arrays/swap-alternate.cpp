#include<iostream>
using namespace std;
void printArray(int arr[],int n)
{
    cout<<"New array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swap(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    int even[6]={2,5,7,4,9,8};
    int odd[5]={10,32,14,17,18};

    swap(even,6);
    printArray(even,6);

    cout<<endl;

    swap(odd,5);
    printArray(odd,5);

    return 0;
}