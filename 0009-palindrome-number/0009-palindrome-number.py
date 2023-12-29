class Solution(object):
    def isPalindrome(self, x):
        if x<0:
          return False
        a=x
        reversed=0
        while a!=0:
          n=a%10
          reversed= reversed*10+n
          a=a//10
        if x== reversed:
          return True
        