class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>min_heap;
        int n = nums.size();
        for(int x : nums) {
            min_heap.push(x);
        }

        while(k--) {
            int top_ele = min_heap.top();
            min_heap.pop();
            top_ele = (-1 * top_ele);
            min_heap.push(top_ele);
        }

        int ans = 0;
        while(!min_heap.empty()) {
            ans += min_heap.top();
            min_heap.pop();
        }
        return ans;
    }
};