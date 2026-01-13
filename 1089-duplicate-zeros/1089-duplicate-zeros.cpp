class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>ans;
        int n = arr.size();
        int i=0;
        while(n != ans.size() && i < n) {
          if(arr[i] != 0) {
            ans.push_back(arr[i]);
          } else {
            ans.push_back(0);
            ans.push_back(0);
          }
          i++;
        }

        for(int i=0;i<n;i++) {
            arr[i] = ans[i];
        }

    }
};