class Solution {
public:
    bool is_even(int number) {
        int check = 0;
        while(number > 0) {
            int rem = number % 10;
            check += rem;
            number /= 10;
        }

        return (check % 2 == 0) ? true : false;
    }
    int countEven(int num) {
        int ans = 0;
        for(int i=1;i<=num;i++) {
            if(is_even(i)) {
                ans++;
            }
        }
        return ans;
    }
};