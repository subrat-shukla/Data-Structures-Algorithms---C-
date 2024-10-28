#include<iostream>
using namespace std;
int recursion(int arr[], int size)
{
    if(size == 0 || size == 1)
        return true;

    else if(arr[0]>arr[1])
        return false;

    else
        return recursion(arr+1, size-1);
}
int main()
{
    int arr[5]={2,4,16,8,9};

    bool ans = recursion(arr,5);
    if(ans){
        cout<<"Array is sorted."<<endl;
    }
    else{
        cout<<"Array is not sorted."<<endl;
    }
    return 0;
}