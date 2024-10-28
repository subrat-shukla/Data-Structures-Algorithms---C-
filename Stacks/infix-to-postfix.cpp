#include<iostream>
using namespace std;
#define maxstk 50
template<typename T>
class Stack
{
    T data[maxstk];
    int top;
    public:
        Stack()
        {
            top=-1;
        }
        void push(T item)
        {
            if(top == maxstk-1)
            {
                cout<<"Overflow\n";
                return;
            }
            top++;
            data[top]=item;
            return;
        }
        T pop()
        {
            if(top==-1)
            {
                cout<<"Underflow";
                return 0;
            }
            T item=data[top];
            top--;
            return item;
        }

        T peek()
        {
            if(top==-1)
            {
                cout<<"Underflow";
                return 0;
            }
            return data[top];
        }
};
bool isoperator(char ch)
{
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^')
        return true;
    return false;
}
int precedency(char ch)
{
    if(ch=='^')
        return 3;
    if(ch=='*' || ch=='/')
        return 2;
    if(ch=='+' || ch=='-')
        return 1;
    return 0;
}
void intopost(string &in, string &post)
{
    Stack<char> s1;
    int i=0;
    while(i<in.length())
    {
        if(isoperator(in[i]))
        {
            while(precedency(s1.peek())>=precedency(in[i]))
            {
                post.push_back(s1.pop());
            }
            s1.push(in[i]);
        }
        else
        {
            post.push_back(in[i]);
        }
        i++;
    }
    while(s1.peek())
    {
        post.push_back(s1.pop());
    }
}
int main()
{
    string in,post;
    cout<<"Enter infix notation : ";
    cin>>in;
    intopost(in,post);
    cout<<post;
}