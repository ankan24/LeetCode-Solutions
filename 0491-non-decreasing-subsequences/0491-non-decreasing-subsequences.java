class Solution {
    public void backtrack(int[] nums, int index, List<List<Integer>>finalAnswer,List<Integer>ans){
    if(ans.size() >= 2) finalAnswer.add(new ArrayList<>(ans));
        HashSet<Integer> set = new HashSet<>();
        for(int i=index;i<nums.length;i++){
    if((ans.size() == 0 || ans.get(ans.size()-1)<= nums[i]) && !set.contains(nums[i])){
                ans.add(nums[i]);
                backtrack(nums,i+1,finalAnswer,ans);
                ans.remove(ans.size()-1); 
                set.add(nums[i]);
            }
        }
    }
    public List<List<Integer>> findSubsequences(int[] nums) {
            List<List<Integer>>finalAnswer = new ArrayList<>();
            List<Integer>ans = new ArrayList<>();
            backtrack(nums,0,finalAnswer,ans);
            return finalAnswer;    
    }
}