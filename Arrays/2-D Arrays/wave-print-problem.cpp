#include<iostream>           //not complete code here
#include<vector>
using namespace std;

int waveprint(int arr[][3], int row, int col)
{
    for(int j=0;j<col;j++)
    {
        if(j & 1){
            //odd index - bottom to top
            for(int i=0;i<row;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            //0 or even index - top to bottom
            for(int i=0;j<row;i++){
                cout<<arr[i][j]<<" ";
            }
        }
    }

    return ;
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

    waveprint(arr,3,3);

    return 0;
}