class Solution {
public:
    int pivotInteger(int n) {
        int total= (n+1)*n/2;
        int leftsum=0, rightsum=0;
        for (int i=1; i<=n; i++){
            leftsum += i;
            rightsum= total-leftsum+i;
            if(leftsum== rightsum) return i;
        }return -1;
        
    }
};