class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int even=0;
        int odd=0, altC=1;
        bool next_even=false;
        if (nums[0]%2==0){
            even++;
        }else{ odd++;
        next_even=true;
        }
        for (int i=1; i<nums.size(); i++){
            if ((nums[i]%2==0 && next_even) || (nums[i]%2==1 && !next_even)){
                altC++;
                next_even = !next_even;
            }

            if (nums[i]%2==0) {even++;}
            else{odd++;}
        }
        cout<< altC;
        return max({odd,even, altC});

        
    }
};