class Solution {
public:
    int countSegments(string s) {
       int count = 0;
       if(s.empty()) {
        return 0;
       }
       string curr = "";
       for(int i=0;i<s.size();i++) {
        if(s[i] == ' ') {
            if(!curr.empty()) {    
              count++;
            }
            curr = "";
        } else {
            curr += s[i];
        }
       } 
       if(!curr.empty()) {
        count++;
       }
       return count;
    }
};