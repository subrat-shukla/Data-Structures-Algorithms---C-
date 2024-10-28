#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //maxheap
    priority_queue<int> maxheap;

    maxheap.push(5);
    maxheap.push(1);
    maxheap.push(4);
    maxheap.push(8);
    maxheap.push(3);
    maxheap.push(7);

    cout<<"Top element of MaxHeap : "<<maxheap.top()<<endl;
    maxheap.pop();
    cout<<"Top element of MaxHeap : "<<maxheap.top()<<endl;
    cout<<"Size of MaxHeap : "<<maxheap.size()<<endl;
    if(maxheap.empty())
        cout<<"MaxHeap is Empty."<<endl;
    else
        cout<<"MaxHeap not Empty."<<endl;

    cout<<endl;

    //minheap
    priority_queue<int,vector<int>,greater<int>> minheap;

    minheap.push(5);
    minheap.push(1);
    minheap.push(4);
    minheap.push(8);
    minheap.push(3);
    minheap.push(7);

    cout<<"Top element of MinHeap : "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"Top element of MinHeap : "<<minheap.top()<<endl;
    cout<<"Size of MinHeap : "<<minheap.size()<<endl;
    if(minheap.empty())
        cout<<"MinHeap is Empty."<<endl;
    else
        cout<<"MinHeap not Empty."<<endl;

    return 0;
}