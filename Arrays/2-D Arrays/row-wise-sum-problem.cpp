#include<iostream>
using namespace std;
void sumrow(int arr[][3], int row, int col)
{
    cout<<"Sum of row elements : "<<endl;
    for(row=0;row<3;row++)
    {
        int sum=0;
        for(col=0;col<3;col++)
        {
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int largestsum(int arr[][3], int row, int col)
{
    int max=INT8_MIN;
    int index=-1;

     for(row=0;row<3;row++)
    {
        int sum=0;
        for(col=0;col<3;col++)
        {
            sum+=arr[row][col];
        }
        if(sum>max){
            max=sum;
            index=row;
        }
    }
    cout<<"Maximum Sum is : "<<max<<endl;
    return index;
}

int main()
{
    int arr[3][3];
    cout<<"Enter Array elements : "<<endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Array elements are : "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }  

    sumrow(arr,3,3);

    cout<<"Row number is : "<<largestsum(arr,3,3)<<endl;

    return 0;
}