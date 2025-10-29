class Solution {
public:
    int smallestNumber(int n) {
        string str = "";
        int ref_n = n;
        while(ref_n > 0) {
            int rem = ref_n % 2;
            str += to_string(rem);
            ref_n /= 2;
        }
        int size = str.size();
        string dupl = "";
        while(size != dupl.size()) {
            dupl += to_string(1);
        }

        return stoull(dupl,nullptr,2);
    }
};