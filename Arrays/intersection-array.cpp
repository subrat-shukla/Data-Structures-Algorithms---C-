#include<iostream>
using namespace std;
int intersection( int arr1[], int n, int arr2[], int m)
{
    int i=0,j=0,ans;
    cout<<"Intersection of both arrays is : "<<endl;
     while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<endl;
            i++;
            j++;
        }   
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
int main()
{
    int i,j,n,m,o,arr1[50],arr2[50];
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

    intersection(arr1,n,arr2,m);

    return 0;
}
    