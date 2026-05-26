class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        int count = 0;
        set<char>st;
        for(int i=0;i<n;i++) {
            if(isupper(word[i])) {
                char search = tolower(word[i]);
                if(word.find(search) != string::npos  &&  (st.find(search) == st.end())) {
                    count++;
                    st.insert(search);
                }
            }
        }
        return count;
    }
};