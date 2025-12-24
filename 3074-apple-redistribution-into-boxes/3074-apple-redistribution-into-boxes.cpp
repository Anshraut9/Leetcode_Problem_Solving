class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = apple.size();
        int m = capacity.size();

        int total_apple = 0;
        for(int i=0;i<n;i++) {
            total_apple += apple[i];
        }
        int count = 0;
        int refer = total_apple;
        int capacity_sum = 0;
        sort(capacity.begin(),capacity.end());
        for(int i=m-1;i>=0;i--) {

            if(refer <= capacity_sum) {
                break;
            }

            capacity_sum += capacity[i];
            count++;
        }
        return count;
    }
};