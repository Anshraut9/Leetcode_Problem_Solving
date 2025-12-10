class Solution {
public:
    
    int check(string word) {
        int n = word.size();
        int len = 0;
        for(int i=0;i<n;i++) {
            if(word[i] == ' ') {
               len++;
            }
        }
        len++;
        return len;
    }
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int ans = INT_MIN;
        for(int i=0;i<n;i++) {
            int size_val = check(sentences[i]);
            ans = max(ans,size_val);
        }
        return ans;
    }
};