class Solution {
public:
    bool isPalindrome(int x) {
        int ld,og;
        long long int rev=0;
        og=x;
        while(x>0){
            ld=x%10;
            x/=10;
            rev=rev*10+ld;
        }
        if (og==rev) return true;
        return false;
    }
};