#include<iostream>
using namespace std;
int  main()
{
    //formulae => arr[i]=*(arr+i)

    int arr[10] = {2,3,4,5};
    
    // cout<<"size of arr is : "<<sizeof(arr)<<endl;
    // cout<<"Address of first memory block is = "<<arr<<endl;
    // cout<<"Value at first is = "<<arr[0]<<endl;
    // cout<<"Address of first memory block is = "<<&arr[0]<<endl;

    // cout<<"Value of first = "<<*arr<<endl;
    // cout<<"Value of first + 1 = "<<*arr + 1<<endl;
    // cout<<"Value at second = "<<*(arr+1)<<endl;
    // cout<<"Value at third = "<<arr[2]<<endl;

    // int i=3;
    // cout<<arr[i]<<endl;
    // cout<< i[arr] <<endl;       //*(i + arr)
    

    // int temp[10] = {1,2};
    // cout<<"size of temp is "<<sizeof(temp)<<endl;
    // cout<<"size of temp is "<<sizeof(*temp)<<endl;
    // cout<<"size of temp is "<<sizeof(&temp)<<endl;

    // cout<<endl;

    // int *p=&temp[0];
    // cout<<"size of p is "<<sizeof(p)<<endl;
    // cout<<"size of p is "<<sizeof(*p)<<endl;
    // cout<<"size of p is "<<sizeof(&p)<<endl;
   
    int a[20] = {1,2,3,5};
    cout<< "Address 1 -> "<< &a[0] <<endl;
    cout<< &a <<endl;
    cout<< a <<endl;

    cout<<endl;
    
    int *p = &a[0];
    cout<< p <<endl;
    cout<< *p <<endl;
    cout<<"Address 2 -> "<< &p <<endl;
 
    cout<<endl;
    return 0;
}