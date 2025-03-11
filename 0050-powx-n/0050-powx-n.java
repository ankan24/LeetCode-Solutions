class Solution {
    public double myPow(double x, int n) {
        double ans = 1.0;
        long power = n; // Convert n to long to avoid overflow
        
        if (power < 0) {
            power = -power; // Make it positive
            x = 1 / x;      // Take reciprocal
        }

        while (power > 0) {
            if (power % 2 == 1) {
                ans = ans * x;
                power = power - 1;
            } else {
                x = x * x;
                power = power / 2;
            }
        }
        return ans;
    }
}
