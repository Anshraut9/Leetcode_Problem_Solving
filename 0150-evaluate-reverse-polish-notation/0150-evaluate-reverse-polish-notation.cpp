class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int>st;
        for(int i=0;i<n;i++) {
            string ch = tokens[i];
            if((ch=="+" || ch=="-" || ch=="*" || ch=="/") &&  st.size() >= 2) {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();

                if(ch == "+") {
                    st.push(b+a);
                } else if(ch=="-") {
                    st.push(b-a);
                } else if(ch=="*") {
                    st.push(b*a);
                } else {
                    st.push(b/a);
                }
            } else {
                int num = stoi(ch);
                st.push(num);
            }
        }
        return st.top();
    }
};