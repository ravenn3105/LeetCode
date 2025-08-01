class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        res = [[1],[1,1]]
        for i in range(numRows):
            cur = res[-1]
            new = []
            new.append(1)

            for i in range(len(cur)-1):
                new.append(cur[i]+cur[i+1])
            new.append(1)
            res.append(new)
        return res[:numRows]