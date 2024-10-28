#include<iostream>
using namespace std;
bool linear(int arr[][4], int target, int row, int col)
{
    for(row=0; row<3; row++)
    {
        for(col=0;col<4;col++)
        {
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4];
    cout<<"Enter Array elements : "<<endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //linear-search function
    int target;
    cout<<"Enter the number you want to search : "<<endl;
    cin>>target;
    if(linear(arr,target,3,4)){
        cout<<"Element found."<<endl;
    }
    else{
        cout<<"Element not found."<<endl;
    }

    return 0;
}