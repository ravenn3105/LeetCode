class Solution {
public:
    int findLucky(vector<int>& arr) {
    int n= *max_element(arr.begin(), arr.end());;
    vector<int> v(n+1, 0); 
    for (auto i: arr) {
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