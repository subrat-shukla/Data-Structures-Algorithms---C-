#include<iostream>
using namespace std;
bool binary_search(int arr[],int s,int e,int key)
{
    if(s>e)  //base case
        return false;

    int mid=s+(e-s)/2;

    if(arr[mid]==key)
        return true;

    if(arr[mid]<key)
        return binary_search(arr+1,mid+1,e,key);

    else  
        return binary_search(arr+1,s,mid-1,key);
}
int main()
{
    int arr[5]={2,4,6,8,9};
    int key;
    cout<<"Enter number you want to search : "<<endl;
    cin>>key;

    bool ans = binary_search(arr,0,sizeof(arr)-1,key);
    if(ans)
        cout<<"Element found."<<endl;
    else    
        cout<<"Element not found."<<endl;
    return 0;
}