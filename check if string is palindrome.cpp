
char toLowerCase(char ch){
    if(ch>='a'&&ch<='z'||ch>=0&&ch<=9){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
           return temp;
    }
}
bool checkPalindrome(string s){
    int st=0;
    int e=s.size()-1;
    while(st<=e){
        if(isalnum(s[st])==0)
          st++;
    
    else if (isalnum(s[e])==0)
           e--;
    else if(toLowerCase(s[st])!=(toLowerCase(s[e]))){
        return false;
    }
    else{
        st++
        e--;
    }
    return true;
 }
}

