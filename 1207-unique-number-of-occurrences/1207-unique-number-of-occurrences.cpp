class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        set<int> setf;
        for (int i=0; i<arr.size(); i++){
            freq[arr[i]]++;
        }
        for (auto i:freq ){
            setf.insert(i.second);
        }
        return freq.size()== setf.size();
          
    }
};