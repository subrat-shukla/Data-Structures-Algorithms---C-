#include <iostream>
#include<vector>
#include<string>
using namespace std;

void reverseWords(string s)
{

	vector<string> tmp;
	string str = "";
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			tmp.push_back(str);
			str = "";
		}
		else
			str += s[i];
	}

	// Last word remaining,add it to vector
	tmp.push_back(str);

	int i;
	for (i = tmp.size() - 1; i > 0; i--)
		cout << tmp[i] << " ";
	// Last word remaining,print it
	cout << tmp[0] << endl;
}

// Driver Code
int main()
{
    cout<<"Enter your string : "<<endl;
	string s;
    getline(cin,s);
	reverseWords(s);
	return 0;
}
