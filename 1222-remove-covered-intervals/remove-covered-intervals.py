class Solution:
    def removeCoveredIntervals(self, ts: List[List[int]]) -> int:
        n= len(ts)
        sum=0
        mx=0
        ts.sort(key=lambda x: (x[0], x[0] - x[1]))
        print(ts)
        for i, j in ts:
            if j> mx:
                sum+=1
                mx= j
        

            
                    
                      
        return(sum)

        