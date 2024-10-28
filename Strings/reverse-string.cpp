#include<iostream>
#include<string>
#include<vector>
using namespace std;
int reverse(string name)
{
    int s=0, e=name.length()-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }

    cout<<"Reversed string is : "<<endl;
   // cout<<name;

    vector<string> str;
    str.push_back(name);
    
}
int main()
{
    string name;

    cout<<"Enter your string : "<<endl;
    getline(cin, name);

    reverse(name);

    return 0;
}