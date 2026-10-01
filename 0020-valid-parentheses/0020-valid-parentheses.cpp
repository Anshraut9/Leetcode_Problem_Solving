class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char>st;
        for(char ch : s) {
            if(ch == ')' || ch=='}' || ch==']') {
                if(!st.empty()) {
                    if(ch == ')' && st.top() == '(') {
                        st.pop();
                    } else if(ch=='}' && st.top() == '{') {
                        st.pop();
                    } else if(ch==']' && st.top()=='[') {
                        st.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            } else {
                st.push(ch);
            }
        }
        return st.empty() ? true : false;
    }
};