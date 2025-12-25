class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int n = happiness.size();
        long long ans = 0;
        sort(happiness.begin(),happiness.end(),greater<int>());
        for(int i=0;i<k && i<n;i++) {
            int val = happiness[i] - i;
            if(val > 0) {
                ans += val;
            }
        }
        return ans;
    }
};