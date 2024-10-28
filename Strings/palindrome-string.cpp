#include <iostream>
using namespace std;

string isPalindrome(string S)
{
	for (int i = 0; i < S.length() / 2; i++)
    {
		if (S[i] != S[S.length() - i - 1])
		{
			return "String not palindrome";
		}
	}
	return "String is palindrome";
}

int main()
{
	string S;
    cout<<"Enter your string."<<endl;
    cin>>S;
	cout << isPalindrome(S);

	return 0;
}
