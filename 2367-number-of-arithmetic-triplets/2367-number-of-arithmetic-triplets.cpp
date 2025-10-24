class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n = nums.size();
        unordered_map<int,int>freq;
        for(int num : nums) {
            freq[num]++;
        }
        int count = 0;
        for(auto it : freq) {
           int finding = it.first + diff;
           int second = it.first - diff;

           if(freq.find(finding) != freq.end()  && freq.find(second) != freq.end()) {
              count++;
           }
        }
        return count;
    }
};