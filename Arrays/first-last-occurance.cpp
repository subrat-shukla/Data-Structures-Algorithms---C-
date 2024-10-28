#include<iostream>
using namespace std;

int first(int arr[],int n,int key)
{
    int s = 0, e = n-1, ans = -1;
    int mid = s+(e-s)/2;
   
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int last(int arr[],int n,int key)
{
    int s=0,e=n-1,ans=-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int even[5] = {1,2,3,3,5};

    int start = first(even,5,3);
    int end = last(even,5,3);

    cout<<"First Occurance of 3 is at index "<<start<<endl;
    cout<<"Last Occurance of 3 is at index "<<end<<endl;

    cout<<"Total no of occurances is "<<end-start+1<<endl;

    return 0;
}