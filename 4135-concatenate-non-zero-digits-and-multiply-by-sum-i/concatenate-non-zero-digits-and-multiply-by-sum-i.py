class Solution:
    def sumAndMultiply(self, n: int) -> int:
        if n==0:
            return 0
        ls= list(str(n))
        l= [x for x in ls if x!= '0']
        x= int("".join(map(str, l)))
        sm=sum(int(num) for num in l)
        return (x*sm)
        