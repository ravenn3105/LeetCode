class Solution:
    def sortVowels(self, s: str) -> str:
        l=[]
        ans=""
        c=0
        for i in s:
            if i in 'AEIOUaeiou':
                l.append(i)
        l.sort()
        for i in s:
            if i not in 'AEIOUaeiou':
                ans+=i
            else:
                ans+= l[c]
                c+=1
        return ans


