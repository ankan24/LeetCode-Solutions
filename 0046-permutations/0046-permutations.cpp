class Solution {
public:
    void solve(vector<int> n , vector<vector<int>> &a , int idx){
        if(idx >= n.size()){
            a.push_back(n);
            return;
        }

        for(int i = idx;i<n.size();i++){
            swap(n[idx], n[i]);
            solve(n,a,idx+1);
            swap(n[idx],n[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
          vector<vector<int>> ans;
          int i = 0;
          solve(nums,ans,i);
          return ans;
    }
};