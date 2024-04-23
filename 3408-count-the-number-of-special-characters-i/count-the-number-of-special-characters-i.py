class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        w= ''.join(sorted(set(word)))
        ans=0
        i=0
        while(i < len(w) and w[i]>= 'A' and w[i]<= 'Z'):
            if chr(ord(w[i]) + ord('a') - ord('A')) in w:
                ans+=1
            i+=1
            
        return ans