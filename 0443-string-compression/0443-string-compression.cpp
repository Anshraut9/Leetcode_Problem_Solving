class Solution {
public:
    int compress(vector<char>& chars) {
    int n = chars.size();
    int count = 0;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        count = 1;
        while(i + 1 < n && chars[i] == chars[i + 1]) {
            count++;
            i++;
        }
        chars[ans++] = chars[i];
        if(count > 1) {
            string temp = to_string(count);

            for(char c : temp) {
                chars[ans++] = c;
            }
        }
    }

    return ans;
}
    
};
