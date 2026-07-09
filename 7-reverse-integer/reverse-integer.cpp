#include<bits/stdc++.h>
class Solution {
public:
    int reverse(int x) {
        int ld;
        int rev=0;
        while(x!=0){
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && ld > 7))
                return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && ld < -8))
                return 0;

            ld=x%10;
            x=x/10;
            rev= rev*10+ld;    
        }
    return rev;
    }
};