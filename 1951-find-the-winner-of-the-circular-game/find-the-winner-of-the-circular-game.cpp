class Solution {
public:
    int getWinner(vector<int> & vec , int len , int k , int st){
        if( len == 1) return vec[0];
        st = (st + k - 1) % len;
        vec.erase(vec.begin() + st);
        return getWinner( vec , len-1 , k , st);
    }
    int findTheWinner(int n, int k) {
        vector< int > vec(n);
        for(int i=1 ; i<=n ; i++) vec[i-1] = i;
        return getWinner(vec , n , k , 0); // 0 index;
    }
};