class Solution {
public:
    int pivotInteger(int n) {
        int ans = -1;
        int sum_val = (n*(n+1)/2);
        for(int i=1;i<=n;i++) {
            int curr = (i*(i+1)/2);
            int rest_val = (sum_val - curr + i);

            if(curr == rest_val) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};