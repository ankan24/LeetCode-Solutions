
class Solution {
    public int reverse(int x) {

        if (x > 0) {
            int ans = 0;

            while (x > 0) {
                int rem = x % 10;
                x = x / 10;

                if (ans > Integer.MAX_VALUE / 10 ||
                    (ans == Integer.MAX_VALUE / 10 && rem > 7)) {
                    return 0;
                }

                ans = ans * 10 + rem;
            }

            return ans;
        }

        else {
            int ans = 0;

            while (x < 0) {
                int rem = x % 10;
                x = x / 10;

                if (ans < Integer.MIN_VALUE / 10 ||
                    (ans == Integer.MIN_VALUE / 10 && rem < -8)) {
                    return 0;
                }

                ans = ans * 10 + rem;
            }

            return ans;
        }
    }
}
