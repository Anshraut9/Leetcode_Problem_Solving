class Solution {
public:
    // int find_fib(int ref) {
    //     if(ref == 1) {
    //         return 1;
    //     }
    //     if(ref == 2) {
    //         return 1;
    //     }
    //     return find_fib(ref-1) + find_fib(ref-2);
    // }
    bool threeFibonacciSum(int n) {
        vector<long long>ans{0,1,1};
        while(ans.back() < n) {
            int sz = ans.size();
            ans.push_back(ans[sz-1] + ans[sz-2]);
        }
        for(int i=0;i+2<ans.size();i++) {
            if((long long)(ans[i] + ans[i+1] + ans[i+2]) == (n)) {
                return true;
            }
        }
        return false;
    }
};