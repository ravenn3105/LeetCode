class Solution:
    def maximum69Number (self, num: int) -> int:
        n=0
        # m=1
        flag=0
        for i in str(num):
            if i=="6" and flag==0:
                n= n*10 + 9
                # m=m*10
                flag=1
                print(n)
            else:
                n= (n*10)+int(i)
                print(n)
                # m=m*10
        return n



