class Solution:
    def hasIncreasingSubarrays(self, nums: List[int], k: int) -> bool:
        def isInc(n):
            for i in range(1,len(n)):
                if n[i]<= n[i-1]:
                    return False
            return True
        for i in range(len(nums)-2*k+1):
            if (isInc(nums[i: i+k])):
                if (isInc(nums[i+k: i+k+k])):
                    return True
                    break
                else: continue
            
            
        return False
        