/* class Solution {
public:
    string removeDuplicateLetters(string s) {
        bool visited[26] = {false}; // Keeps track of visited characters
        int lastIndex[26]; // Stores the last occurrence index of each character
        
        for(int i = 0; i < s.length(); i++) {
            lastIndex[s[i] - 'a'] = i;
        }

        string result = "";

        for(int i = 0; i < s.length(); i++) {
            if(visited[s[i] - 'a']) continue;

            while(!result.empty() && result.back() > s[i] && lastIndex[result.back() - 'a'] > i) {
                visited[result.back() - 'a'] = false;
                result.pop_back();
            }

            result += s[i];
            visited[s[i] - 'a'] = true;
        }

        return result;
    }
};
 */

/* #include<iostream>
#include<string>
using namespace std;

void removeDuplicates(string str, string ans, int i, int map[26]){

    if(i == str.size()){
        cout<< "ans : " << ans;
        return;
    }

    int mapIdx = (int) (str[i] - 'a');

    if(map[mapIdx] ==  true){ // duplicate
        removeDuplicates(str, ans, i+1, map);
    } else {
        map[mapIdx] = true;
        removeDuplicates(str, ans+str[i], i+1, map);
    }
}

int main(){
    string str = "aaabbb";
    string ans = "";
    int map[26] = {false};

    removeDuplicates(str, ans, 0, map);
    return 0;
} */
