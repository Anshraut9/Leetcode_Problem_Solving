class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string>ans(n,"-1");
        for(int i=0;i<n;i++) {
            unsigned long long count = 1;
            for(int j=0;j<n;j++) {
               if(score[j] > score[i]) {
                 count++;
               }
            }

            if(count == 1) {
                ans[i] = "Gold Medal";
               } else if(count == 2) {
                ans[i] = "Silver Medal";
               } else if(count==3) {
                ans[i] = "Bronze Medal";
               } else {
                ans[i] = to_string(count);
               }
        }
        return ans;
    }
};