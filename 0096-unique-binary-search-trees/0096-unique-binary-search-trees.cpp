class Solution {
public:
    int numTrees(int n) {
        if (n == 0 || n == 1)
            return 1;
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int ls = numTrees(i - 1);
            int rs = numTrees(n - i);
            ans += ls * rs;
        }
        return ans;
    }
};