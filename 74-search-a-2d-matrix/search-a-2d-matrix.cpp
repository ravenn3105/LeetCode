class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows= matrix.size();
        int columns= matrix[0].size();
        int i=0, j= rows*columns-1;
        while (i<=j){
            int m= i+ (j-i)/2;
            int r= m/columns, c= m%columns;
            if (matrix[r][c]==target){
                return true;
            }
            else if (matrix[r][c]>target){
                j=m-1;
            }
            else if (matrix[r][c]<target){
                i=m+1;
            }
        }
        return false;
    }
};
