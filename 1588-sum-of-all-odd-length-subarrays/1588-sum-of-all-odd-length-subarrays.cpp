class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        for(int i=0;i<n;i++) {
            ans += arr[i];
        }
        for(int i=0;i<n-1;i++) {
            int count = 1;
            int sum = arr[i];
            for(int j=i+1;j<n;j++) {
               sum += arr[j];
               count++;
               if(count & 1 == 1) {
                ans += sum;
               }
            }
        }
        return ans;
    }
};