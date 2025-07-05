class Solution {
public:
    int findLucky(vector<int>& arr) {
     int max_val = *max_element(arr.begin(), arr.end());
    vector<int> v(max_val + 1, 0);  // Size based on maximum value
    for (auto i : arr) {
        v[i] += 1;
    } 
    //  for (auto i:v){
    //     cout<<i;
    //  } 
    for (int i=v.size()-1; i>0; i--){
        if (v[i]==i){
            return v[i];
        }

    }
     return -1;
    }
};