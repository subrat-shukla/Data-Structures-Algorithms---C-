#include<iostream>
using namespace std;
int main()
{
    //creating 2-d array
    int arr[3][4];
    cout<<"Enter Array elements : "<<endl;   //by-default row-wise hi input lega

    //taking row-wise input
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    } 
    //taking column-wise input
    /*for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[j][i];
        }
    } */

    cout<<endl;
    //printing array
    cout<<"Transpose : "<<endl;
    for(int j=0;j<4;j++)
    {
        for(int i=0;i<3;i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}