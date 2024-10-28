#include<iostream>
using namespace std;
void recursion(int n, string arr[])
{
    cout<<n<<endl;
    if(n==0)
        return;

    int digit=n%10;
    n/=10;

    recursion(n,arr);
    cout<<arr[digit]<<" ";
}
int main()
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    cout<<endl;

    recursion(n, arr);
    return 0;
}