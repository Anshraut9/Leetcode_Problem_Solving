class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int n = capacity.size();
        int ans = -1;
        int min_diff = INT_MAX;
        for(int i=0;i<n;i++) {
           if(capacity[i] >= itemSize && (capacity[i] - itemSize  < min_diff)) {
              ans = i;
              min_diff = capacity[i] - itemSize;
           }
        }
        return ans;
    }
};