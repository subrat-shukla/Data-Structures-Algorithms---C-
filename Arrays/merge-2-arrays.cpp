#include<iostream>
using namespace std;
int merge(int arr1[],int n,int arr2[],int m, int arr3[])
{
    int i=0,j=0,k=0;
    while(i<n && j<m){

        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    //copy first array k element ko
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    //copy second array k element ko
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}
int print(int ans[],int n)
{
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
int main()
{
    int i,j,n,m,arr1[50],arr2[50],arr3[50];
    cout<<"Enter size of first array : "<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter size of second array : "<<endl;
    cin>>m;
    for(j=0;j<m;j++){
        cin>>arr2[j];
    }

    cout<<"Merged array is : "<<endl;
    merge(arr1,n,arr2,m,arr3);

    print(arr3,n+m);
    return 0;
}