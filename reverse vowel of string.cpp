/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class solution{
public:
    bool vol(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return true;
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') return true;
              return false;
    }
    string reverseVowels(string s){
        int st=0;
        int e=s.size()-1;
        while(st<e){
            if(!vol(s[st])) st++;
            if(!vol(s[e]))  e--;
            if(vol(s[st])&&vol(s[e])){
                swap(s[st],s[e]);
            }
        }
        return s;
    }
    
};
