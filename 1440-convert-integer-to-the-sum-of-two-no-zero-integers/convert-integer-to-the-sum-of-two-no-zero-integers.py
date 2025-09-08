class Solution:
    def getNoZeroIntegers(self, n: int) -> List[int]:
        ans=[]
        for i in range(1,n):
            if '0' not in str(i) and '0' not in str(n-i):
                ans.append(i)
                ans.append(n-i)
                break
        return ans