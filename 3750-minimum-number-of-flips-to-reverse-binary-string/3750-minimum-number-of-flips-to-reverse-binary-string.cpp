class Solution {
public:
    int minimumFlips(int n) {
        string str = "";
        while(n > 0) {
          int rem = n % 2;
          str += to_string(rem);
          n /= 2;
        }
        string original = str;
        reverse(str.begin(),str.end());
        int i=0;
        int count = 0;
        while(i != str.size()) {
            if(original[i] != str[i]) {
                count++;
            }
            i++;
        }
        return count;
    }
};