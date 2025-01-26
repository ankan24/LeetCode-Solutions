class Solution {
public:
    int bs(vector<int> n,int t,int l,int h){
        if(l > h) return -1;
        int m = l+(h-l)/2;
        if(n[m] == t) return m;
        else if(n[m] < t) return bs(n,t,m+1,h);
        else return bs(n,t,l,m-1);

    }
    int search(vector<int>& nums, int target) {
       return bs(nums,target,0,nums.size()-1);
    }
};