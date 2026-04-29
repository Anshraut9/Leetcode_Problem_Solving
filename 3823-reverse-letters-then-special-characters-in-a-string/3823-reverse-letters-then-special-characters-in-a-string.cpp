class Solution {
public:
    string reverseByType(string s) {
        string refer = s;
        int n = s.size();
        vector<char>word;
        vector<char>spec_char;
        for(int i=0;i<n;i++) {
            if(isalpha(s[i])) {
                word.push_back(s[i]);
            } else {
                spec_char.push_back(s[i]);
            }
        }
        reverse(word.begin(),word.end());
        reverse(spec_char.begin(),spec_char.end());

        int i = 0;
        int j = 0;
        for(int k = 0; k < n; k++) {
          if(isalpha(s[k])) {
             s[k] = word[i++];
          } else {
             s[k] = spec_char[j++];
        }
    }
    return s;
    }
};