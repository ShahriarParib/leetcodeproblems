class Solution {
public:
    bool isPalindrome(int x) {
        long long q = x;
        long long m = 0, p = 0;
        bool ans=0;
        if (x < 0) {
            ans = 0;
        } else {
            while (x > 0) {
                p = x % 10;
                m = m * 10 + p;
                x = x / 10;
            }
            cout<<m<<" "<<q;
            if (m == q) {
                ans = 1;
            }
        }
        return ans;
    }
};