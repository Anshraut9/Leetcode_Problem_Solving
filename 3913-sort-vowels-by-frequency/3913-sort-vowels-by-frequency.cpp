class Solution {
public:
    bool is_vowel(char ch) {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
            return true;
        }
        return false;
    }
    string sortVowels(string s) {
        int n = s.size();
        unordered_map<char,int>freq;
        for(char ch : s) {
            if(is_vowel(ch)) {
                freq[ch]++;
            }
        }
        vector<pair<char,int>>v;
        for(auto &it : freq) {
            v.push_back(it);
        }

        sort(v.begin(),v.end(), [] (auto &a, auto &b) {
            return a.second < b.second;
        });

        stack<char>st;
        for(int i=0;i<v.size();i++) {
            while(v[i].second--) {
                st.push(v[i].first);
            }
        }

        for(int i=0;i<n;i++) {
            if(is_vowel(s[i])) {
                char ch = st.top();
                s[i] = ch;
                st.pop();
            }
        }

        return s;
    }
};