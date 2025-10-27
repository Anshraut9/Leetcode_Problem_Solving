class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();

        int count = 0;

        for(int i=0;i<n;i++) {
            string first = bank[i];
            int count_initial = std::count(first.begin(),first.end(),'1');
            for(int j=i+1;j<n;j++) {
                string second = bank[j];
                int count_sec = std::count(second.begin(),second.end(),'1');
                if(count_sec != 0) {
                    count += (count_initial * count_sec);
                    break;
                }
            }
        }

        return count;
    }
};