class Solution {
public:
    string generateTheString(int n) {
        string res(n, 'a');
        
        if (n > 0) {
            if (n % 2 == 0) {
                res[n - 1] = 'b';
            }
        }
        
        return res;
    }
};
