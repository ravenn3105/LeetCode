class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int j=x,s=0;
        while (x>0){
           s+= x%10;
           x /= 10; 
        }
        if (j%s==0){
            return s;
        }
        return -1;
    }
};