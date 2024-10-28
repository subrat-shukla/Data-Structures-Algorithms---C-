#include<iostream>
using namespace std;
/*
int unique(int *arr,int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[100],x;
    cout<<"Enter number of elements in array : "<<endl;
    cin>>x;
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    cout<<"Unique element in array is : "<<unique(arr,x)<<endl;
    return 0;
}



int main()
{
    int arr[100],n;
    cout<<"Enter number of elements in array : "<<endl;
    cin>>n;
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Unique element in array is : "<<endl;

    int counter = 0;

    for(int i = 0; i < n; i++)
    {
        counter = 0;
        for(int j=0, k=n; j<k+1; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    counter++;
                }
            }
        }
        if(counter==0)
            cout<<arr[i]<<" ";
    }

    return 0;
}
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter number of elements in array: " << endl;
    cin >> n;
    cout << "Enter elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unique elements in array are: " << endl;

    unordered_map<int, int> frequency;

    // Count frequency of each element
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    // Output unique elements
    for (int i = 0; i < n; i++) {
        if (frequency[arr[i]] == 1) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}


