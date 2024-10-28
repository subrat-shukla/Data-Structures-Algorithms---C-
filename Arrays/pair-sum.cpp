#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pairsum(int arr[],int n,int s)
{
    int i=0,j=0;
    vector<vector<int>> ans;
    cout<<"Pair sum of array is : "<<endl;
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    return ans;
}

int main()
{
    int i,n,arr[10];
    int s;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of S : "<<endl;
    cin>>s;

    pairsum(arr,n,s);
    
    return 0;
}