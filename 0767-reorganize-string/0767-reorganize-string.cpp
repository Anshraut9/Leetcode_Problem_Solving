class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> freq;
        for(char ch : s) {
            freq[ch]++;
        }
        priority_queue<pair<int, char>> maxHeap;
        for(auto &it : freq) {
            maxHeap.push({it.second, it.first});
        }
        string ans = "";
        int prevFreq = 0;
        char prevChar = '#';
        while(!maxHeap.empty()) {
            int currFreq = maxHeap.top().first;
            char currChar = maxHeap.top().second;
            maxHeap.pop();
            ans += currChar;
            currFreq--;
            if(prevFreq > 0) {
                maxHeap.push({prevFreq, prevChar});
            }
            prevFreq = currFreq;
            prevChar = currChar;
        }
        if(ans.size() == s.size()) {
            return ans;
        }
        return "";
    }
};