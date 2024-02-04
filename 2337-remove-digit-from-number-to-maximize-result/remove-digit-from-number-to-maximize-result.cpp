class Solution {
public:
    string removeDigit(string number, char digit) {
        string res="0";
        for(int i=0; i<number.size(); i++)
        {
            if(number[i]==digit)
            {
                string left=number.substr(0, i);
                string right=number.substr(i+1, number.size()-i-1);
                string str=left+right;
                if(str>res)
                {
                    res=str;
                }
            }
        }
        return res;
    }
};