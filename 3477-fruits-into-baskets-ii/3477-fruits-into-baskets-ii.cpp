 class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size(), alloted = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (fruits[i] <= baskets[j]) {
                    baskets[j] = -1;
                    alloted++;
                    break;
                }
            }
        }
        return n - alloted;
    }
};