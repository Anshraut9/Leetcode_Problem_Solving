class Solution {
public:
    int digitFrequencyScore(int n) {
       map<int,int>freq;
       while(n > 0) {
        int rem = n%10;
        freq[rem]++;
        n/=10;
       } 
       int ans = 0;
       for(auto &it:freq) {
        ans += (it.first * it.second);
       }
       return ans;
    }
};