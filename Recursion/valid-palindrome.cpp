#include<iostream>
using namespace std;
bool recursion(string &s, int i, int j)
{ 
    if(i>j)
        return true;
    
    if(s[i]!=s[j])
        return false;
    else
        recursion(s,i+1,j-1);
}
int main()
{
    string s;
    cout<<"Enter string : "<<endl;
    cin>>s;
    bool ans = recursion(s, 0, s.length()-1);
    if(ans)
        cout<<"Its a palindrome."<<endl;
    else
        cout<<"Its not a palindrome."<<endl;
    
}