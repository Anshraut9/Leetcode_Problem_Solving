class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int total_k = 2*k;
        if(total_k > n) {
            return false;
        }

        if(n==2 && k==1) {
            return true;
        }

        for(int i=0;i+total_k <= n;i++) {

            bool first_check = true;
            bool second_check = true;

            for(int j=i+1;j<i+k;j++) {
               if(nums[j-1] >= nums[j]) {
                  first_check = false;
                  break;
               }
            }

            for(unsigned int m = i+k+1;m<i+total_k;m++) {
                if(nums[m-1] >= nums[m]) {
                    second_check = false;
                    break;
                }
            }

            if((first_check==true) && (second_check==true)) {
                return true;
            }
        }

        return false;
    }
};