class Solution {
public:
    bool detectCapitalUse(string word) {
       int n = word.size();
       if(n==1) {
        return true;
       }
       int lower_count = 0;
       int upper_count = 0;
       bool first_upper = false;

       for(int i=0;i<n;i++) {
        if(isupper(word[i]) && i==0) {
            first_upper = true;
            upper_count++;
        } else if(islower(word[i])) {
            lower_count++;
        } else {
            upper_count++;
        }
       }

       if(upper_count == n || (first_upper && lower_count == n-1) || lower_count == n) {
        return true;
       } 
       return false;
    }
};