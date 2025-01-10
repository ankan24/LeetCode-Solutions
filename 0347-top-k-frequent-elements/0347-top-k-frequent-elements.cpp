class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
           vector<int> ans;
        
        // Step 1: Count the frequency of each element in the array
        unordered_map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }
        
        // Step 2: Use a min-heap (priority queue) to store the k most frequent elements
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        
        // Step 3: Insert elements into the heap
        for (auto& entry : freqMap) {
            minHeap.push({entry.second, entry.first});  // Push {frequency, element}
            
            // If the heap size exceeds k, pop the element with the smallest frequency
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }
        
        // Step 4: Extract the top k elements from the heap
        while (!minHeap.empty()) {
            ans.push_back(minHeap.top().second);  // Push the element (not frequency)
            minHeap.pop();
        }
        
        return ans;
    }
};