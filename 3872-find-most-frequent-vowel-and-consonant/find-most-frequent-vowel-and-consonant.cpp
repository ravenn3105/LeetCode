class Solution {
public:
    int maxFreqSum(string s) {
        // int v=0, c=0;
        unordered_map<char, int> v;
        unordered_map<char, int> c;
        set<char> a={'a', 'e', 'i', 'o','u'};
        for (auto i:s){
            if (a.find(i)!= a.end()){
                v[i]++;
            }
            else{
                c[i]++;
            }
        }
        int sm=0, mx=0;
        for (auto i:v ){
            if (i.second>mx){ mx= i.second;}
        }
        cout<< mx;
        sm+=mx; mx=0;
        for (auto i:c ){
            if (i.second>mx){ mx= i.second;}
        }
        sm+=mx;
        return sm;

    }
};