class Solution {
public:
    int reverse(int num) {
        int ans = 0;
        while(num > 0) {
            int rem = num%10;
            ans = ans*10 + rem;
            num /= 10;
        }
        return ans;
    }

    bool is_prime(int number) {
        if(number < 2) {
            return false;
        }
        if(number == 2) {
            return true;
        }

        for(int i=2;i<=sqrt(number);i++) {
            if(number % i == 0) {
                return false;
            }
        }
        return true;
    }

    int sumOfPrimesInRange(int n) {
        int original = n;
        int reverse_num = reverse(n);
        int final_ans = 0;

        int max_val = max(original,reverse_num);
        int min_val = min(original,reverse_num);
        for(int i=min_val;i<=max_val;i++) {
            if(is_prime(i)) {
                final_ans += i;
            }
        }
        return final_ans;
    }
};