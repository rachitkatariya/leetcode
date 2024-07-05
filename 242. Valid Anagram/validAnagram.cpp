#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string str1, string str2) {
    if(str1.length() != str2.length()){
        cout<<"not a valid anagram ";
        return false;
    }

    int cnt[26] = {0};

    for(int i=0; i<str1.length(); i++){
        cnt[str1[i]-'a']++;
    }

    for(int i=0; i<str2.length(); i++){
        if(cnt[str2[i]-'a']==0){
            cout<<"not a valid anagram ";
            return false;
        }
        cnt[str2[i]-'a']--;
    }
    cout<<"valid anagram ";
    return true;
}

int main(){
    string str1 = "anagram";
    string str2 = "nagaram";
    isAnagram(str1, str2);
}
