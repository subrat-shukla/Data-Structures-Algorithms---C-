#include<iostream>
using namespace std;

void counting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;

    counting(n);
}