#include<iostream>
using namespace std;

int main() {
    cout<<"Enter your string : ";
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z')
            //continue;
            s[i] = s[i]-'a'+'A';
        
        else
            s[i] = s[i]-'A'+'a';   //for converting upper to lower

            //s[i] = s[i]-'a'+'A';   for lower to upper
    }

    cout<<s;
    return 0;
}