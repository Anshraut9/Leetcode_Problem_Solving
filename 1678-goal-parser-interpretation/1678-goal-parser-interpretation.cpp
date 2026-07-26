class Solution {
public:
    string interpret(string command) {
        string ans = "";
        int n = command.size();
        for(int i=0;i<n;i++) {
            if(isalpha(command[i])) {
                ans += command[i];
            } else if(i > 0 && (command[i] == ')' && command[i-1] == '(')) {
                ans += 'o';
            }
        }
        return ans;
    }
};