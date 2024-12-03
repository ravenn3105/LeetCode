class Solution {
public:
int factor(int n, int k){      //o(n)=1
    int y;
    // Find y such that n= k^x +y 
    if (k!=1){
        int x = log(n) / log(k);
        y = n - pow(k, x);
        }
    else {return n;}
    return y;
}
    int findTheWinner(int n, int k) {
        int y, i=0;
        y= factor(n,k);
        int winner = 1;
        //runs till y number of steps are completed
        while(i<=y){        //O(y+1)
        for(int groupSize = 1; groupSize <= n; groupSize++){    //O(n)
            winner = ((winner + k - 1) % groupSize)+1 ;
            }
            i++;
        }
        return winner;
    }   //overall time complexity= O(n^2)
        //space complexity= O(1)
};