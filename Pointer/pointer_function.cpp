#include<iostream>
using namespace std;
void print(int *p)
{
    cout<< *p <<endl;
}

void update(int *p)
{
    *p=*p+1;
}

int sum(int *arr,int n)   //array as a pointer aaya h
{
    cout<<"Size is : "<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int value=5;
    int *p = &value;

  //  print(p);
    cout<<"Before "<< *p <<endl;
    update(p);
    cout<<"After "<< *p <<endl;

    cout<<endl;

    int arr[5]={1,2,3,4,5};
    cout<<"Sum is : "<<sum(arr,5)<<endl;

    cout<<endl;

    int a[6]={1,2,3,4,5,8};
    cout<<"Sum is : "<<sum(a+3,3)<<endl;

    return 0;
}