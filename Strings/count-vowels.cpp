#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter your string : "<<endl;
    cin>>str;
   
    int count = 0;
    for(int i = 0; i <= str.length()-1; i++){
        if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||
            str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'){
                count++;
            }
    }
    cout<<"Total number of vowels in string are : "<<count<<endl;
    return 0;
}