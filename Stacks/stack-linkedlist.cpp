#include<iostream>
using namespace std;
// creating a linked list;
class Node {
public:
    int data;
    Node* next;
   
    // Constructor
    Node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};
 
class Stack {
    Node* top;
    public:
        Stack(){ 
            top = NULL; 
        }
 
    void push(int data)
    {
 
        // Create new node temp and allocate memory in heap
        Node* temp = new Node(data);

        if (!temp) {
            cout << "\nStack Overflow..";
            exit(1);
        }
 
        // Initialize data into temp data field
        temp->data = data;
 
        // Put top pointer reference into temp next
        temp->next = top;
 
        // Make temp as top of Stack
        top = temp;
    }

    // the stack is empty or not
    bool isEmpty()
    {
        return top == NULL;
    }
 
    // Utility function to return top element in a stack
    int peek()
    {
        // If stack is not empty , return the top element
        if (!isEmpty())
            return top->data;
        else
            exit(1);
    }
    
    // Function to pop the top element from the stack
    void pop()
    {
        Node* temp;
 
        // Check for stack underflow
        if (top == NULL) {
            cout << "\nStack Underflow..." << endl;
            exit(1);
        }
        else {
 
            // Assign top to temp
            temp = top;
 
            // Assign second node to top
            top = top->next;
 
            // This will automatically destroy
            // the link between first node and second node
 
            // Release memory of top node
            // i.e delete the node
            cout<<"Popped element is : "<<temp->data<<endl;
            free(temp);
        }
    }

    // Function to return the size of the stack
    void display()
    {
        Node* temp;
 
        // Check for stack underflow
        if (top == NULL) {
            cout << "\nStack Underflow";
            exit(1);
        }
        else {
            temp = top;
            while (temp != NULL) {
 
                // Print node data
                cout << temp->data;
 
                // Assign temp next to temp
                temp = temp->next;
                if (temp != NULL)
                    cout << " -> ";
            }
        }
    }
};
 

int main()
{
    // Creating a stack
    Stack s;
 
    // Push the elements of stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
 
    // Display stack elements
    s.display();
 
    // Print top element of stack
    cout << "\nTop element is " << s.peek() << endl;
 
    // Delete top elements of stack
    s.pop();
    s.pop();
 
    // Display stack elements
    s.display();
 
    // Print top element of stack
    cout << "\nTop element is " << s.peek() << endl;
 
    return 0;
}