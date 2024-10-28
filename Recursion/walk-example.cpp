#include<iostream>
using namespace std;
void recursion(int src, int dest)
{
    cout<<"Source "<<src<<" Destination "<<dest<<endl;
    if(src==dest){
        cout<<"Successfully reached.."<<endl;
        return;
    }
    src++;
    recursion(src,dest);
}
int main()
{
    int src,dest;
    cout<<"Enter your source and destination : "<<endl;
    cin>>src>>dest;
    cout<<endl;
    recursion(src,dest);

    return 0;
}