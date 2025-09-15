class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        l= text.split()
        n= len(l)
        for j in l:
            for i in brokenLetters:
                if i in j:
                    n-=1
                    break
        return n