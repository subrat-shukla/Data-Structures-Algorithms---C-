#include <iostream>
using namespace std;

bool isVowel(char ch)
{
	if (ch == 'a' || ch == 'e'
		|| ch == 'i' || ch == 'o'
		|| ch == 'u')
		return true;
	else
		return false;
}

// Function to return the minimum
// cost to convert all the vowels
// of a string to a single one
int minCost(string S)
{
	
	int cA = 0;
	int cE = 0;
	int cI = 0;
	int cO = 0;
	int cU = 0;

	// Iterate through the string
	for (int i = 0; i < S.size(); i++) {

		// If a vowel is encountered
		if (isVowel(S[i])) {

			// Calculate the cost
			cA += abs(S[i] - 'a');
			cE += abs(S[i] - 'e');
			cI += abs(S[i] - 'i');
			cO += abs(S[i] - 'o');
			cU += abs(S[i] - 'u');
		}
	}


	return min(min(min(min(cA, cE),
					cI),
				cO),
			cU);
}

int main()
{
	string S = "geeksforgeeks";

	cout << minCost(S) << endl;

	return 0;
}
