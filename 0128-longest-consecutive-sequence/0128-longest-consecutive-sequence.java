class Solution {
    public int longestConsecutive(int[] nums) {
        if (nums.length == 0) return 0;
        SortedSet<Integer> numSet = new TreeSet<>();
        for (int num : nums) {
            numSet.add(num); // TreeSet automatically sorts elements and removes duplicates
        }

        int longest = 1, count = 0, lastSmall = Integer.MIN_VALUE;
        for (int num : numSet) {
            if (num - 1 == lastSmall) {
                count++;
                lastSmall = num;
            } else {
                count = 1;
                lastSmall = num;
            }
            longest = Math.max(longest, count);
        }
        return longest;
    }
}