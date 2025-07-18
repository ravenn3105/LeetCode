class Solution {
public:
    int reverse(int x) {
        bool neg=false;
        if (x==0){
            return 0;
        }
        if (x<0){
            neg= true;
        }
        // string a="";
        // long x2=abs(x);
        long ans=0;
        while(x!=0){
            ans= ans*10 +x%10;
            x/=10;
        }
        if (ans > INT_MAX || ans < INT_MIN) {
            return 0;
        }
        return ans;
    }
};