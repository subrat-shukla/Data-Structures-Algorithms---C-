#include<iostream>
using namespace std;

bool palindrome(int x)
{
    if(x<0){
        cout<<"Not palindrome."<<endl;
    }
    else{
     int org=x;
    int rem,rev=0;
    while(x!=0){
        rem=x%10;
	    rev=rev*10+rem;
	    x/=10;
    }
    if(org==rev){
    cout<<"Number is palindrome."<<endl;
    }
    else{
    cout<<"Not palindrome."<<endl;
    }
    }
}
int main()
{
    int x;
    cout<<"Enter Number to check : "<<endl;
    cin>>x;
    
    palindrome(x);
    return 0;
}
