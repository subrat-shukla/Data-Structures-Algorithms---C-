#include<iostream>
using namespace std;
bool linear_search(int arr[],int size,int key)
{
    if(size == 0)  //base case
        return false;

    else if(arr[0]==key)
        return true;

    else  
        return linear_search(arr+1, size-1,key);
}
int main()
{
    int arr[5]={2,4,6,8,9};
    int key;
    cout<<"Enter number you want to search : "<<endl;
    cin>>key;

    bool ans = linear_search(arr,5,key);
    if(ans)
        cout<<"Element found."<<endl;
    else    
        cout<<"Element not found."<<endl;
    return 0;
}