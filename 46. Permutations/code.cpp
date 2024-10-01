#include<iostream>
#include<string>
#include<vector>
using namespace std;

void permutations(string str, string ans){
    int n = str.size();
    if(n == 0){
        cout << ans << "\n";
        return;
    }

    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        // "abcdefgh", i = 2 => "ab" + "defgh" => str.substr(0,i) + str.substr(i+1, n-i-1);
        string nextStr = str.substr(0,i) + str.substr(i+1, n-i-1);
        permutations(nextStr, ans + ch);
    }
}

int main() {
    string str = "abc";
    string ans = "";

    permutations(str, ans);
    return 0;
}