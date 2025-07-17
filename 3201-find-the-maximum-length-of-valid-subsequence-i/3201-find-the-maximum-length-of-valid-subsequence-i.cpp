class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int oddCnt = 0, evenCnt = 0, cnt = 0;
        bool flag = nums[0] % 2 == 1;

        for (int num : nums) {
            if (num % 2 == 1) {
                if (flag) {
                    flag = !flag;
                    cnt++;
                }
                oddCnt++;
            } else {
                if (!flag) {
                    flag = !flag;
                    cnt++;
                }
                evenCnt++;
            }
        }
        return max({cnt, oddCnt, evenCnt});
    }
};