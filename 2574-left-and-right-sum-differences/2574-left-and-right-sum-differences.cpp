class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
      vector<int>a1(n,0);
        int sum1=0;
        int sum2=0;
        vector<int>a2(n,0);
        vector<int>ans(n,0);
        for(int i=0;i<n;i++) {
            a1[i] = sum1;
            sum1+=nums[i];
        }
        for(int j=n-1;j>=0;j--) {
            a2[j] = sum2;
            sum2+=nums[j];
        }
      for(int i=0;i<n;i++) {
          ans[i] = abs(a1[i]-a2[i]);
      }
        return ans;
    }
};