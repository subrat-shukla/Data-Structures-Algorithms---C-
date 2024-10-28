//count distinct ways to climb stairs problem

#include<iostream>
using namespace std;
int ways(int n)
{
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    
    return ways(n-1)+ways(n-2);
}
int main()
{
    cout<<"Enter number of stairs : "<<endl;
    int n;
    cin>>n;

    cout<<"Ways are : "<<ways(n)<<endl;
    return 0;
}