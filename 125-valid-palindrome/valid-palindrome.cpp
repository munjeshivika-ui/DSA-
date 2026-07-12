class Solution {
public:
    bool check(int i,string &a){  
        if(i>=a.size()/2) return true;
        if(a[i]!=a[a.size()-i-1]) return false;
        return check(i+1,a);
    }
    bool isPalindrome(string s) {
        string a="";
        for(char c: s){
            if(isalnum(c)){
                a+=tolower(c);
            }
        }
        return check(0,a);
    }
    
};