class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++) {
            if(i < 10) {
                ans.push_back(i);
            } else {
                int val = i;
                bool found = true;
                while(val > 0) {
                    int rem = val % 10;
                    if(rem == 0) {
                        found = false;
                        break;
                    }
                    if(rem != 0 && i % rem != 0) {
                        found = false;
                        break;
                    }

                    val /= 10;
                }
                if(found == true) {
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};