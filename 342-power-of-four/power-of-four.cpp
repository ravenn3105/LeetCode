class Solution {
public:
    bool isPowerOfFour(int n) {
        int x=n;
        if (n==0){ return false;}
        while(x%4==0){
            x/=4;
        }
        // cout<<x;
        return x==1;
    }
};