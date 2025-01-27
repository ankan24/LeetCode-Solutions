 class Solution {
public:
    int dCookies(vector<int>& cookies, vector<int>& ch, int k, int c) {
        if (c == cookies.size()) {
            int unfairness = 0;
            for (int i : ch) {
                unfairness = max(unfairness, i);
            }
            return unfairness;
        }

        int minUnfairness = INT_MAX;
        for (int j = 0; j < k; j++) {
            ch[j] += cookies[c];
            minUnfairness = min(minUnfairness, dCookies(cookies, ch, k, c + 1));
            ch[j] -= cookies[c];
        }
        return minUnfairness;
    }

    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> children(k);
        return dCookies(cookies, children, k, 0);
    }
};
