class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        
        for (int i=1; i<10; i++){
            int x=0;
            for (int j=i; j<10; j++){
                if (x>high){
                    break;
                }else{
                    x= x*10 +j;
                    if (x>= low && x<= high){
                        ans.push_back(x);
                    }
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};