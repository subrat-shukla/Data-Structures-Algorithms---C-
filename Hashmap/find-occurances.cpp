#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout<<"Enter number of array elements : "<<endl;
    cin>>n;

    cout<<"Enter elements : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    unordered_map<int,int> map;  //it will store the count of each element
    for(int i=0; i<n; i++){
        map[arr[i]]++;
    }

    for(auto itr = map.begin(); itr!=map.end(); ++itr)
    {
        cout<<itr->first<<" occurs "<<itr->second<<" times in array."<<endl;
    }

    return 0;    
}
