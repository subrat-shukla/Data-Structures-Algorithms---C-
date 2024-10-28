#include<iostream>
using namespace std;

// int print(int i, int n)
// {
//     if(i>n)
//         return 0;
    
//     cout<<i<<endl;
//     print(i+1,n);
// }

// int rev_print(int n)
// {
//     //base case
//     if(n==0)
//         return 0;
    
//     cout<<n<<endl;
//     rev_print(n-1);
// }

//by backtracking method

int print(int i, int n)
{
    if(i<1)
        return 0;
    print(i-1,n);
    cout<<i<<endl;
}
int reverse(int n, int i)
{
    if(n<i)
        return 0;
    reverse(n,i+1);
    cout<<i<<endl;
}
int main()
{
    int n;
    cout<<"Enter last number : "<<endl;
    cin>>n;
    cout<<endl;

    //counting from 1 to n
    cout<<"Printing counting from 1 to "<<n<<endl;
   // print(1,n);
    print(n,n);  //for backtracking

    //counting from n to 1
    cout<<"Printing counting from "<<n<<"to 1"<<endl;
   // rev_print(n);
    reverse(n,1);
}