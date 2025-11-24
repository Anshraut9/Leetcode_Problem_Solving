class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int>freq;
        for(int i=0;i<list1.size();i++) {
            freq[list1[i]] = i;
        }

        int min_diff = INT_MAX;
        vector<string>ans;
        for(int j=0;j<list2.size();j++) {
            if(freq.find(list2[j]) != freq.end() && ((j + freq[list2[j]]) <= min_diff)) {
                if((j + freq[list2[j]] == min_diff)) {
                   ans.push_back(list2[j]);
                   min_diff = j + freq[list2[j]];
                }
                else if((j + freq[list2[j]] < min_diff) ) {
                    if(!ans.empty()) {
                        while(!ans.empty()) {
                           ans.pop_back();
                        }
                    }
                    ans.push_back(list2[j]);
                    min_diff = j + freq[list2[j]];
                }
            }
        }

        return ans;
    }
};