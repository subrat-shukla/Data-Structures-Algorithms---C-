#include<iostream>
#define MAXQ 5
using namespace std;
class Queue
{
    int data[MAXQ];
    int front,rear;
    public:
        Queue()
        {
            front = rear = -1;
        }
        void add_queue(int item)
        {
            if(front ==0 && rear == MAXQ-1 || rear == front-1)
            {
                cout<<"overflow\n";
                return;
            }
            if(front == -1)
                front = rear =0;
            else if(rear == MAXQ-1)
                rear=0;
            else
                rear++;
            data[rear]=item;
        }
        int del_queue()
        {
            if(front == -1)
            {
                cout<<"Underflow\n";
                return 0;
            }

            int item=data[front];

            if(front == rear)
                front = rear =-1;
            else if(front == MAXQ-1)
                front =0;
            else
                front++;

            return item;
        }
        bool empty()
        {
            if(front == -1)
                return true;
            else
                return false;
        }
};
int main()
{
    Queue q1;
    q1.add_queue(10);
    q1.add_queue(20);
    q1.add_queue(30);
    q1.add_queue(40);
    q1.add_queue(50);

    cout<<q1.del_queue()<<endl;

 //   q1.add_queue(60);
    while(!q1.empty())
    {
        cout<<q1.del_queue()<<endl;
    }
   
}
