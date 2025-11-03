class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int total_time = 0;
        int i=0;
        while(i < n) {
            char curr_color = colors[i];
            int max_time = 0;
            int summation_time = 0;

            while(i < n && colors[i] == curr_color) {
               summation_time += neededTime[i];
               max_time = max(max_time,neededTime[i]);
               i++;
            }

            total_time += (summation_time - max_time);
        }

        return total_time;
    }
};