class Solution {
public:
    int minBitFlips(int start, int goal) {
        string bin_start = bitset<32>(start).to_string();
        string bin_goal = bitset<32>(goal).to_string();

        int count = 0;
        for(int i=0;i<32;i++) {
            if(bin_start[i] != bin_goal[i]) {
                count++;
            }
        }
        return count;
    }
};