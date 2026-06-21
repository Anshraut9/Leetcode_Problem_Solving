class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        sort(costs.begin(),costs.end());

        int ans = 0;
        int refer = 0;
        for(int i=0;i<n;i++) {
            if(refer + costs[i] > coins) {
                break;
            }
            refer += costs[i];
            ans++;
        }
        return ans;
    }
};