class Solution {
public:
    int maxArea(vector<int>& height) {
      int area= 0;
      int i=0;
      int j=height.size()-1;
      while(i<j){
          int ht= min(height[i], height[j]);
          int waterArea= (j-i)*ht;
              if (area< waterArea){
                  area= waterArea;}
                if (height[i]<height[j] ){
                  i++;}
                else{
                  j--;}
              
      }
          return area;
       
    }
};