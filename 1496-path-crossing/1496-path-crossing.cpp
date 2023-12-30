class Solution {
public:
    bool isPathCrossing(string path) {
        map<char, pair<int, int>> unit;
        unit['N']= {0,1};
        unit['S']= {0,-1};
        unit['W']= {-1,0};
        unit['E']= {1,0};
        set<string> visited;
        visited.insert("0,0");
        int x=0;
        int y=0;
        for (char i: path){
            pair<int,int> curr= unit[i];
            int changeX=curr.first;
            int changeY=curr.second;
            x+=changeX;
            y+=changeY;

            string pos= to_string(x)+ "," +to_string(y);
            
            if (visited.contains(pos)){
                return true;
            }
            visited.insert(pos);

        }return false;
    }
};