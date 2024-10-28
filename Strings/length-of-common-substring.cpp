#include <iostream>
#include <string>

int longest_common_substring(const std::string& a, const std::string& b) {
    int len_a = a.length();
    int len_b = b.length();
    int max_length = 0;

    for (int i = 0; i < len_a; ++i) {
        for (int j = 0; j < len_b; ++j) {
            int length = 0;
            int m = i;
            int n = j;

            while (m < len_a && n < len_b && a[m] == b[n]) {
                length++;
                m++;
                n++;
            }

            max_length = std::max(max_length, length);
        }
    }

    return max_length;
}

int main() {
    std::string str1 = "subrat shukla";
    std::string str2 = "at ";
    
    int result = longest_common_substring(str1, str2);
    std::cout << "Length of longest common substring: " << result << std::endl;

    return 0;
}
