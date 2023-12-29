class Solution {
public:
    int secondHighest(string s) {
        vector<int> q;
        int n= s.size();
        for (int i=0; i<n; i++){
            if (isdigit(s[i])){
                q.push_back(s[i]-'0');
            }
        }sort(q.begin(), q.end());
        q.erase(unique(q.begin(), q.end()), q.end());
        
        if (q.size()<=1){ return -1;}
        return q[q.size()-2];
    }
};