#include<iostream>
using namespace std;
int main()
{
    int num=5;
    cout<<"Num = "<<num<<endl;
    cout<<"Address of num = "<<&num<<endl;

    //pointer declaration
    int *ptr = &num;

    /*or it can be as 
    int *ptr = 0;
    ptr = &num ;
    */

    cout<<"Address = "<<ptr<<endl;
    cout<<"Value = "<<*ptr<<endl;

    cout<<"Size of integer is = "<<sizeof(num)<<endl;
    cout<<"Size of pointer is = "<<sizeof(ptr)<<endl;

    //copying a pointer
    int *q = ptr;
    cout<<ptr<<" - "<<q<<endl;
    cout<<*ptr<<" - "<<*q<<endl;

    //important concept
    int i=3;
    int *t = &i;
    *t=*t+1;
    cout<<*t<<endl;

    cout<<t<<endl;

    t = t+1;
    cout<<t<<endl;

    return 0;

}