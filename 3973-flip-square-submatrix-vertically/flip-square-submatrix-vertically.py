class Solution(object):
    def reverseSubmatrix(self, grid, x, y, k):
        """
        :type grid: List[List[int]]
        :type x: int
        :type y: int
        :type k: int
        :rtype: List[List[int]]
        """
        sub=[]
        for q in range(x,x+k):
            r= grid[q][y:y+k]
            sub.append(r)
        rev= sub[::-1]
        for i in range(x,x+k):
            grid[i][y:y+k]= rev[i-x]
        return grid