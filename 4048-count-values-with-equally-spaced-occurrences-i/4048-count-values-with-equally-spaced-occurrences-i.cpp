class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        map<int,vector<int>>freq;
        for(int i=0;i<n;i++) {
            freq[nums[i]].push_back(i);
        }
        int count = 0;
        for(auto &it : freq) {
            if(it.second.size() == 3) {
                int first = it.second[0];
                int second = it.second[1];
                int third = it.second[2];

                if((second - first) == (third - second)) {
                    count++;
                }
            }
        }
        return count;
    }
};