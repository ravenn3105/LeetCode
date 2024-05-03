class Solution {
public:
    static int compareVersion(string& v1, string& v2) {
        const int n1=v1.size(), n2=v2.size();
        int t1=0, t2=0;
        for(int i=0, j=0; i<n1 || j<n2; i++, j++){
            while(i<n1 && v1[i]!='.'){
                t1=10*t1+(v1[i++]-'0');
            }
            while(j<n2 && v2[j]!='.'){
                t2=10*t2+(v2[j++]-'0');
            }
            if (t1<t2) return -1;
            else if (t1>t2) return 1;
            t1=0;
            t2=0;
        }
        return 0;
    }
};
