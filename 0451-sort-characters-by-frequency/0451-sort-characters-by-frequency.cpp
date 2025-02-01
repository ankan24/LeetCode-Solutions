class Solution{
public:
    string frequencySort(string s) {
    unordered_map<char , int> freq;
    for(char c : s){
        freq[c]++;
    }
    priority_queue<pair<int,char>> maxheap;
    for(auto ele : freq){
        maxheap.push({ele.second , ele.first});
    }
    string ans = "";
    while(!maxheap.empty()){
        auto [val,key] = maxheap.top();
        maxheap.pop();
        ans.append(val,key);
    }
     return ans;   
    }
};