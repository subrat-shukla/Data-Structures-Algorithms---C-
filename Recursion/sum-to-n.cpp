#include<iostream>
using namespace std;

// parameterized function call
int printsum(int n, int sum)
{
    if(n<1){
        cout<<"Sum is "<<sum<<endl;
        return 0;
    }
    
    printsum(n-1, sum+n);
}

//functional recursion
int summ(int n)
{
    if(n==0)
        return 0;
    
    return n+summ(n-1);
}

int main()
{
    int n;
    cout<<"Enter the last number : "<<endl;
    cin>>n;

    int sum=0;

    printsum(n,sum);

    cout<<"Sum using this function is "<<summ(n);
    return 0;
}