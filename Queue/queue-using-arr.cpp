#include<iostream>
using namespace std;

class Queue{
    public:
        int *arr;
        int size;
        int front, rear;

    public:
        Queue(int size){
            this -> size = size;
            arr = new int[size];
            front = -1;
            rear = -1;
        }

    void enqueue(int item){
        if(rear == size-1){
            cout<<"Queue overflow.."<<endl;
            return;
        }

        if(front == -1){
            front = rear = 0;
        }
        else{
            rear++;
            arr[rear] = item;
        }
    }

    void dequeue(){
        if (front==-1) {
            cout << "Queue underflow..." << endl;
            return;
        }
        if (front == rear) {
            delete[] arr;
            arr=NULL;
            front=-1;
            rear=-1;
        }
        
    }

};

int main()
{
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    return 0;
}