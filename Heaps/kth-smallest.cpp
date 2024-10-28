#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void kth_Smallest_MinHeap(vector<int>&arr, int k) {

        priority_queue<int, vector<int>, greater<int>>pq ;
        int n = arr.size()  ;

        for (int i = 0; i < arr.size(); i++) {
            pq.push(arr[i])  ;
        }

        int f = k - 1 ;

        while (f > 0) {
            pq.pop()  ;
            f-- ;
        }

        cout << k<<"th Smallest element is " << pq.top() << "\n"  ;
}

int main()
{
    vector<int>arr;
    int size;
    cout<<"Enter size : "<<endl;
    cin>>size;
    cout<<"Enter elements in vector: "<<endl;
    
    for(int i = 0; i<size; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    

    int k;
    cout<<"Enter the kth element : "<<endl;
    cin>>k;
    kth_Smallest_MinHeap(arr, k);

    return 0;
}