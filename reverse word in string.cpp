#include<iostream>
#include<vector>
using namespace std;

class solution{
    
public:

    string reverseWords(string s){
        vector<string> words;
        stringstream str(s);
        string word;
        
        while(str>>word)words.push_back(word);
        reverse(words.begin(),words.end());
        
        string result;
        for(auto it:words) result+=" "+it;
        result.erase(0,1);
        return result;
    }
};