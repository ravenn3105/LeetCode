class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int count=0;
        while (left!= right){
            count++;
            left=left/2;
            right=right/2;
        }return left<<count;
    }
};