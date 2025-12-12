class Solution {
public:
    int minPartitions(string n) {
        int len = n.length();
        int max_num = 0;
        for(int i=0;i<len;i++) {
            int num = n[i] - '0';
            if(num > max_num) {
                max_num = num;
            }
        }
        return max_num;
    }
};