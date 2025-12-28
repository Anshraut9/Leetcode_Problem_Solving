class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int n = operations.size();
        for(int i=0;i<n;i++) {

            if(operations[i] == "+") {
                if(st.size() >= 2) {
                    int top_ele_one = st.top();
                    st.pop();
                    int top_ele_two = st.top();

                    st.push(top_ele_one);
                    st.push(top_ele_one + top_ele_two);
                }
            } else if(operations[i] == "C" && !st.empty()) {
                st.pop();
            } else if(operations[i] == "D" && !st.empty()) {
                st.push(2 * st.top());
            } else {
                st.push(stoi(operations[i]));
            } 
        }

        int ans = 0;
        while(!st.empty()) {
            int top_ele = st.top();
            st.pop();
            ans += top_ele;
        }
        return ans;
    }
};