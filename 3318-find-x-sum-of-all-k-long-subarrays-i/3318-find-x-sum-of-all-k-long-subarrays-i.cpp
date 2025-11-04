class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int>ans;
        for(int i=0;i<n-k+1;i++) {
            map<int,int>freq;
            for(int j=i;j<i+k;j++) {
                freq[nums[j]]++;
            }

            vector<pair<int,int>>vec(freq.begin(),freq.end());
            sort(vec.begin(),vec.end(), [] (const pair<int,int>&a,const pair<int,int>&b) {
                if(a.second == b.second) {
                    return a.first > b.first;
                } else {
                    return a.second > b.second;
                }
            });
            
            long long store_val = 0;
            for(int k=0;k<x && k<(int)vec.size();k++) {
               store_val += 1LL * vec[k].first * vec[k].second;
            }

            ans.push_back(store_val);
        }
        return ans;
    }
};