class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        if(n==0) {
            return 0;
        }
        bitset<32>b(n);
        string bin_str = b.to_string();
        reverse(bin_str.begin(),bin_str.end());
        bitset<32>rev_num(bin_str);
        return rev_num.to_ulong();
    }
};