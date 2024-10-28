#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void kth_Largest_MaxHeap(vector<int>&arr, int k) {

        priority_queue<int>pq ;
        int n = arr.size()  ;

        for (int i = 0; i < arr.size(); i++) {
            pq.push(arr[i])  ;
        }

        int f = k - 1 ;

        while (f > 0) {
            pq.pop()  ;
            f-- ;
        }

        cout <<k<<"th Largest element is " << pq.top() << "\n"  ;
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
    kth_Largest_MaxHeap(arr, k);

    return 0;
}