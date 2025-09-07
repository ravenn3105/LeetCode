class Solution {
public:
int circularDist(char a, char b){
    int pos1= a-'a';
    int pos2= b-'a';
    if (pos2 >= pos1) {
        return pos2 - pos1; 
    } else {
        return (26 - pos1) + pos2;  
    }
}
    int minOperations(string s) {
        set<char> st(s.begin(), s.end());
        vector<char> v(st.begin(), st.end());
        int sm=0;
        for (int i=0; i<v.size()-1; i++){
            if (v[i]!= 'a'){
            sm+= circularDist(v[i], v[i+1]);}
        }
        sm+= circularDist(v.back(), 'a');
        return sm;
    }
};