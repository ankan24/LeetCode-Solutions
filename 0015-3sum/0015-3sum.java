class Solution {
    public List<List<Integer>> threeSum(int[] arr) {
        if(arr == null || arr.length < 3) return new ArrayList<>();
        Arrays.sort(arr);
        Set<List<Integer>> res = new HashSet<>();

        for(int i=0;i<arr.length-2 ; i++){
            int l = i+1;
            int r = arr.length-1;

            while(l < r){
                int sum = arr[i]+arr[l]+arr[r];
                if(sum == 0){
                    res.add(Arrays.asList(arr[i],arr[l],arr[r]));
                    l++ ;
                    r--;
                }else if(sum < 0){
                    l++;
                }else{
                    r--;
                }
            }
        } 
        return new ArrayList<>(res);
    }
}