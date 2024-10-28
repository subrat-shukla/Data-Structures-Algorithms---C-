#include <iostream>
#include <string>

using namespace std;

string rearrangeString(const string& M) {
    int n = M.length();
    string firstHalf = M.substr(0, (n + 1) / 2); // Adjusting for odd length strings
    string secondHalf = M.substr((n + 1) / 2);

    string D(n, ' '); // Initialize string D with n spaces

    for (int i = 0; i < (n + 1) / 2; ++i) {
        D[2 * i + 1] = firstHalf[i]; // Placing characters from the first half at odd positions
    }

    for (int i = 0; i < n - (n + 1) / 2; ++i) {
        D[2 * i] = secondHalf[i]; // Placing characters from the second half at even positions
    }

    return D;
}

int main() {
    string M = "subrat";
    string result = rearrangeString(M);
    cout << "Result: " << result << endl;
    return 0;
}

