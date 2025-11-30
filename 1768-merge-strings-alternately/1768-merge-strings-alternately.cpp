class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string final_ans = "";
        int n = word1.size();
        int m = word2.size();
        int i=0;
        int j=0;

        while(i<n && j<m) {
            final_ans += word1[i];
            final_ans += word2[j];
            i++;
            j++;
        }

        if(i==n && j<m) {
            while(j<m) {
                final_ans += word2[j];
                j++;
            }
        } else if(i<n && j==m) {
            while(i<n) {
                final_ans += word1[i];
                i++;
            }
        }

        return final_ans;
    }
};