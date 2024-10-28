#include<iostream>
using namespace std;
void recursion(string &s, int i, int j)
{ 
   //static int i=0;
    if(i>j)
        return ;
    
    swap(s[i],s[j]);
    i++;
    j--;
    recursion(s,i,j);
    //i=0;
}
int main()
{
    string s;
    cout<<"Enter string : "<<endl;
    cin>>s;
    recursion(s,0,s.length()-1);
    cout<<"Reversed string is : "<<s<<endl;
    
}