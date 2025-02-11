class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r= *max_element(piles.begin(), piles.end());
        int res= r;
        while(l<=r){
            int m= (l+r)/2;
            long long total_time= 0;
            for (auto i:piles){
                total_time+= (i + m-1) / m;
            }
            if (total_time<= h){
                res=m;
                r=m-1;
            }else{
                l=m+1;
            }
        }
        return res;
    }
};
