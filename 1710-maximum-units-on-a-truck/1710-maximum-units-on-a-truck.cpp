class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[] (const vector<int>&a , const vector<int>&b) {
            return a[1] > b[1];
        });

        int refer = truckSize;
        int n = boxTypes.size();
        int ans = 0;
        for(int i=0;i<n;i++) {
            if(refer == 0) {
                break;
            }


           if(refer > boxTypes[i][0]) {
            ans += (boxTypes[i][0] * boxTypes[i][1]);
            refer -= boxTypes[i][0];
           }
           else {
            while(refer > 0) {
                ans += boxTypes[i][1];
                refer--;
            }
          }
        }

        return ans;
    }
};