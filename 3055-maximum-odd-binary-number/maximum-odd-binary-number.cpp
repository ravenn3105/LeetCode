class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string v;
        int c=-1;
        int d=0;
        for (auto i:s){
            if (i=='1'){
                c++;
            }
            else if (i=='0'){ d++;}
        }if (c>0){
            while (c--){
                v+='1';
            }
        }
            while (d--){
                v+= '0';
            }
            v+='1';
            return v;
        
    }
};