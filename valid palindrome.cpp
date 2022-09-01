/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class solution{
private:
    bool valid(char ch){
        if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0'&& ch<='9')){
            return 1;
        }
        return 0;
    }
    
    bool toLowerCase(char ch){
        if((ch>='a'&& ch<='z')|| (ch>='0'&& ch<='9')){
            return ch;
        }
        else{
            char temp=ch-'A'+'a';
            return temp;
        }
    }
    bool checkPalindrome(string a){
        int s=0;
        int e=a.length()-1;
        while(s<=e){
            if(a[s]!=a[e]){
                return 0;
            }
            else{
                s++;
                e--;
            }
        }
        return 1;
    }
public:
    bool isPalindrome(string s){
        string temp="";
        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        for(int j=0;j<temp.length();j++){
            temp[j]=toLowerCase(temp[j]);
        }
        return checkPalindrome(temp);
    }
};