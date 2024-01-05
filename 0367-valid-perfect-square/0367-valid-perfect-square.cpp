class Solution {
public:
    bool isPerfectSquare(int num) {
       if (num==1){
           return true;
       }
       long l= 1;
       long r=num;
       
        while (r>=l){
            long middle= (l+r)/2;
            if (middle*middle== num){
                return true;
            }
            else if( middle*middle>num){
                r= middle-1;
                
            }
            else {
                l=middle+1;
                
            }

        }return false;

    }
};