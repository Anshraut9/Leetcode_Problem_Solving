class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        priority_queue<int,vector<int>,greater<int>>min_heap;
        for(int i=1;i<n;i+=2) {
            int prev = nums[i-1];
            string curr = to_string(nums[i]);
            int sz = curr.size();
            int refer = pow(10,sz);
            prev = ((prev * refer) + stoi(curr));
            min_heap.push(prev);
        }
        return min_heap.top();
    }
};