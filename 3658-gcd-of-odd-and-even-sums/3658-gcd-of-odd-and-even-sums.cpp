class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum_odd = n*n;
        int sum_even = n*(n+1);

        int smallest = min(sum_odd,sum_even);

        if(sum_odd % smallest == 0 && sum_even % smallest == 0) {
            return smallest;
        } else {
            for(int i=smallest/2;i>=1;i--) {
                if(sum_odd % i == 0 && sum_even % i == 0) {
                    return i;
                }
            }
        }
        return 1;
    }
};