#include<iostream>
using namespace std;
int sum(int arr[], int size)
{
    if(size == 0)
        return 0;

    else if(size == 1)
        return arr[0];

    else  
        return arr[0] + sum(arr+1, size-1);
}
int main()
{
    int arr[5]={2,4,16,8,9};

    cout<<"Sum of array elements is : "<<sum(arr,5);
    return 0;
}