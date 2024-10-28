#include<iostream>
using namespace std;
char getmax(string s)
{
    int arr[26]={0};
    //array of character count
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;

        if(ch>='a' && ch<='z'){  //lowercase
            number = ch-'a';
        }
        else{   //uppercase
            number = ch-'A';
        }

        arr[number]++;
    }
    //find maximum occuring character
    int max=-1,ans=0;
    for(int i=0;i<26;i++)
    {
        if(max<arr[i]){
            ans=i;
            max=arr[i];
        }
    }
    return ('a'+ans);
}
int main()
{
    string s;
    cin>>s;

    cout<<"Maximum occuring character is : "<<getmax(s)<<endl;
}