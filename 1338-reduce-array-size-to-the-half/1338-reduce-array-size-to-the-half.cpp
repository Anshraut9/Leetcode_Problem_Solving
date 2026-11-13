class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        map<int,int>freq;
        for(int x : arr) {
            freq[x]++;
        }
        int size = n;
        vector<pair<int,int>>refer;
        for(auto &it : freq) {
            refer.push_back({it.first,it.second});
        }

        sort(refer.begin(),refer.end(), [](pair<int,int>&a, pair<int,int>&b) {
            if(a.second != b.second) {
                return a.second > b.second;
            } 
            return a.first > b.first;
        });
        int count = 0;
        for(int i=0;i<n;i++) {
            int freq_val = refer[i].second;
            size -= freq_val;
            count++;
            if(size <= n/2) {
                break;
            }
        }
        return count;
    }
};