#include<iostream>
using namespace std;

int getmin(int num[],int n)
{
    int min=INT8_MAX;
    for(int i=0;i<n;i++)
    {
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}
int getmax(int num[],int n)
{
    int max=INT8_MIN;
    for(int i=0;i<n;i++)
    {
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}

int main()
{
    int size;
    cout<<"Enter size : "<<endl;
    cin>>size;

    int num[100];
    cout<<"Enter numbers :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    cout<<"MAximum value is : "<<getmax(num,size)<<endl;
    cout<<"Minimum value is : "<<getmin(num,size)<<endl;
    return 0;
}