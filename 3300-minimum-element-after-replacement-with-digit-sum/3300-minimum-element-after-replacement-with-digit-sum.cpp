class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        priority_queue<int,vector<int>,greater<int>>min_heap;
        for(int i=0;i<n;i++) {
            int val = nums[i];
            int dig = 0;
            while(val > 0) {
                int rem = val % 10;
                dig += rem;
                val /= 10;
            }
            min_heap.push(dig);
        }
        return min_heap.top();
    }
};