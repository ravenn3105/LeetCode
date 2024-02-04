class Solution {
public:
    string removeDigit(string number, char digit) 
    {
        string ans = "";
        for(int i = 0; i < number.size(); i++)
        {
            if(number[i] == digit)
            {
                string help = number.substr(0,i) + number.substr(i+1, number.size());
                ans = max(ans, help);
            }
        }
        return ans;
    }
};