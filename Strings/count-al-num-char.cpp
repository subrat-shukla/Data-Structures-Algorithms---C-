#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter your string : ";
    cin>>s;

    int alcount = 0, numcount = 0, charcount = 0;

    for(int i=0; i<s.length()-1; i++)
    {
        if(s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122)
            alcount++;

        if(s[i] >= 48 && s[i] <= 57)
            numcount++;

        if(s[i] >= 32 && s[i] <= 47) 
            charcount++;
    }

    cout<<"Total number : "<<endl;
    cout<<"Alphabets = "<<alcount<<endl;
    cout<<"Numbers = "<<numcount<<endl;
    cout<<"Special characters = "<<charcount<<endl;

    return 0;
}