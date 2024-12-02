class Solution {
public:
int factor(int n, int k){
    int y;
    // Find the largest x such that k^x <= n
    if (k!=1){int x = log(n) / log(k);
    y = n - pow(k, x);}
    else {return n;}
    // Compute y
    
    
    return y;
}
    int findTheWinner(int n, int k) {
        int p, i=0;
        p= factor(n,k);
        int winner = 1;
        
        while(i<=p){
        for(int groupSize = 1; groupSize <= n; groupSize++){
            winner = ((winner + k - 1) % groupSize) + 1;

        }
        i++;}
        return winner;
    }
};