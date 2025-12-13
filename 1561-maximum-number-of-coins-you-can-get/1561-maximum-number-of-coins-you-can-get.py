class Solution:
    def maxCoins(self, piles: List[int]) -> int:
        n = len(piles)
        ans = 0
        piles.sort()
        i=0
        j=n-2
        while j > i:
            ans += piles[j]
            j-=2
            i+=1
            
        return ans