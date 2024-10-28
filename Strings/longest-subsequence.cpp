
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
  string s;
  cout<<"Enter a string : "<<endl;
  cin >> s;

  int n = s.length();
  int i = 0, j = 0;
  int max_len = 0;
  set<char> char_set;

  while (i < n) {
    if (char_set.find(s[i]) == char_set.end()) {
      char_set.insert(s[i]);
      max_len = max(max_len, i - j + 1);
      i++;
    } else {
      char_set.erase(s[j]);
      j++;
    }
  }

  cout << max_len << endl;

  return 0;
}