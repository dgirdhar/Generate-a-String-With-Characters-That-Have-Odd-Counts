class Solution {
public:
    string generateTheString(int n) {
        string res;
        
        if (n > 0) {
            if (n % 2 == 1) {
                for (int i = 1; i <= n; ++i) {
                    res += "a";
                }
            }
            else {
                for (int i = 1; i <= n - 1; ++i) {
                    res += "a";
                }
                res += "b";
            }
        }
        return res;
    }
};
