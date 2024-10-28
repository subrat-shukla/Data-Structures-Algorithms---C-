#include<iostream>
using namespace std;
int getLength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }

    cout<<"Length of string is : "<<count;
}
int main()
{
    char name[50];
    cout<<"Enter your string : "<<endl;
    cin>>name;

    getLength(name);

    return 0;
}