#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        int left = 0, right = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                left++;  
            } else {
                if(left > 0) {
                    left--;  
                } else {
                    right++;  
                }
            }
        }
        return left + right;
    }
};

int main() {
    string s = "()))((";  
    Solution solution;  
    int result = solution.minAddToMakeValid(s); 
    cout << "Minimum additions to make the string valid: " << result << endl;
    return 0;
}
