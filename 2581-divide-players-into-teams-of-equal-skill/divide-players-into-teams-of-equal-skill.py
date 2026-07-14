class Solution:
    def dividePlayers(self, skill: List[int]) -> int:
        skill.sort()
        ls=[]
        l=0
        r= len(skill)-1
        sm= skill[r]+ skill[l]
        chem=0
        flag=0
        while (l<r):
            if skill[r]+ skill[l]!= sm:
                flag=1
                break
            else:
                ls.append([skill[l],skill[r]])
                l+=1
                r-=1
        if flag==0:
            for i,j in ls:
                chem+= i*j 

        if flag==0 :
            return chem
        else:
            return -1
        print(ls)
