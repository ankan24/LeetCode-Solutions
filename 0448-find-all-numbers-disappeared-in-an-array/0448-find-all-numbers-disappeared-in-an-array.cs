public class Solution {
    public IList<int> FindDisappearedNumbers(int[] nums) {
        IList<int> ans = new List<int>();

        foreach(int num in nums){
            int indx = Math.Abs(num)-1;
            if(nums[indx] > 0){
            nums[indx] *= -1;
            }
        }
        for(int i=0;i<nums.Length;i++){
            if(nums[i] > 0){
                ans.Add(i+1);
            }
        }
        return ans;
    }
}