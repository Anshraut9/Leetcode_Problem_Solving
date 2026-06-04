class Solution {
public:
    int check_wavi(int number) {
        int count = 0;
        string str = to_string(number);
        for(int i=1;i<str.size()-1;i++) {
            int check = (str[i] - '0');
            int prev = (str[i-1] - '0');
            int next = (str[i+1] - '0');


            if((prev < check && check > next) || (prev > check && check < next)) {
                count++;
            }
        }
        return count;
    }
    int totalWaviness(int num1, int num2) {
        int count = 0;
        for(int i=num1;i<=num2;i++) {
            if(i > 100) {
                int val = check_wavi(i);
                count += val;
            }
        }
        return count;
    }
};