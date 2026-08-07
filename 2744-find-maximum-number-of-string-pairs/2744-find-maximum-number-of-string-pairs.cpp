class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        for(int i=0;i<n-1;i++) {
            string str = words[i];
            sort(str.begin(),str.end());
            for(int j=i+1;j<n;j++) {
                string curr = words[j];
                sort(curr.begin(),curr.end());
                if(str == curr) {
                    count++;
                }
            }
        }
        return count;
    }
};