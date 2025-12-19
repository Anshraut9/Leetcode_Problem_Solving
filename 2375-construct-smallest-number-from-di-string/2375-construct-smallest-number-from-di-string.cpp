class Solution {
public:
    string smallestNumber(string pattern) {
        int n = pattern.size();
        int digit = 1;
        stack<int>st;
        st.push(digit);
        digit++;

        string ans = "";
        for(int i=0;i<n;i++) {
           if(pattern[i] == 'I') {
             while(!st.empty()) {
                int top_ele = st.top();
                st.pop();
                ans += to_string(top_ele);
             }
           }
            st.push(digit);
            digit++;
        }

        while(!st.empty()) {
            int top_ele = st.top();
            st.pop();
            ans += to_string(top_ele);
        }

        return ans;
    }
};