class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int bt=0;
        for(auto x:data){
            if (bt==0){
                if( x>>5== 0b110){
                    bt=1;
                }else if (x>> 4== 0b1110){
                    bt=2;
                }else if (x>>3== 0b11110){
                    bt=3;
                }else if (x>>7 != 0b0){
                    return false;
                }
            }else{
                if (x>> 6 != 0b10){ return false;
                }
                bt--;
            }
        }if (bt==0){
            return true;
        }return false;
    }
};