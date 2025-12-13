class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        n = len(s)
        count_one = 0
        for i in range(n):
            if s[i] == '1':
                count_one += 1
        ans = ""
        while count_one != 1:
            ans += '1'
            count_one -= 1
        if count_one == 1 and len(ans) != n-1:
            while len(ans) != n-1:
                ans += '0'
        
        ans += '1'

        return ans