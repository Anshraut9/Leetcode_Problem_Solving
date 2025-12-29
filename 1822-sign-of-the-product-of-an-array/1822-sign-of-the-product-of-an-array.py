class Solution:
    def arraySign(self, nums: List[int]) -> int:
        n = len(nums)
        zero_count = 0
        neg_count = 0
        for i in range(n):
            if nums[i] < 0:
                neg_count+=1
            elif nums[i] == 0:
                zero_count += 1
            else:
                continue
        
        if zero_count > 0:
            return 0
        if neg_count % 2 != 0:
            return -1
        return 1
        