// program to give number present at fibonacci index
// example: 0,1,1,2,3,5,8,13
//fibonacci(4) = 3;

#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n<=1)
        return n;

    int last = fibonacci(n-1);
    int slast = fibonacci(n-2);
    return last + slast;
}

int main()
{
    int n;
    cout << "Enter the Fibonacci Index : ";
    cin >> n;

    cout<<"Element present at given index in series : "<<fibonacci(n);
    return 0;
}