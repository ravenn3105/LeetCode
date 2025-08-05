class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
       
        int c=0, n= fruits.size();
        for (int i=0; i<n; i++){
            for (int j=0; j<baskets.size(); j++){
                if (fruits[i]<= baskets[j]){
                    c++;
                    baskets[j]=0;
                    break;
                }
            }
        }
        return n-c;
    }
};