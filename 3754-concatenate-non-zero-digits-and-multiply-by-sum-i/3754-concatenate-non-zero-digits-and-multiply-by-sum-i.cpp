class Solution {
public:
    long long sumAndMultiply(int n) {
        unsigned long long number = 0;
        stack<int>st;
        int original = n;
        while(n>0) {
            int rem = n % 10;
            if(rem != 0) {
                st.push(rem);
            }
            n/=10;
        }
        int sum_val = 0;
        while(!st.empty()) {
            number = number * 10 + (st.top());
            sum_val += st.top();
            st.pop();
        }
        return number * sum_val;
    }
};