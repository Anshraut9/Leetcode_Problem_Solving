class Solution {
public:
    int rotate_val(int val) {
        if(val == 0 || val == 1 || val == 8) {
            return val;
        }
        if(val==2) return 5;
        if(val==5) return 2;
        if(val==6) return 9;
        if(val==9) return 6;
        else return -1;
    }
    int rotatedDigits(int n) {
        int ans = 0;
        for(int i = 1; i <= n; i++) {
        int num = i;
        bool valid = true;
        bool diff = false;

        while(num > 0) {
            int digit = num % 10;
            int rotated = rotate_val(digit);
            if(rotated == -1) { 
                valid = false;
                break;
            }

            if(rotated != digit) {
                diff = true;
            }

            num /= 10;
        }

        if(valid && diff) {
            ans++;
        }
    }

    return ans;
    }
};