class Solution {
public:
    int possibleStringCount(string word) {
        int count=1;
        int i=0;
        while (i<word.size()){
            int s=1;
            while(word[i]== word[i+1]){
                
                s++;
                i++;
            }
            if (s!=1){
                count+= s-1;
            }
            else{ s+=1;}
            i++;
        }
        return count;
    }
};