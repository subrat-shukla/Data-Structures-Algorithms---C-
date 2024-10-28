#include<iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter number of elements in array: " << endl;
    cin >> n;
    cout << "Enter elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<"Duplicate elements in the array are : "<<endl;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i]==arr[j])
                cout<<arr[i]<<" ";
        }
    }
    return 0;
}