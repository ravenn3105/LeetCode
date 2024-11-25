class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto i: tokens){
            if (i== "+" || i=="-"|| i=="/"|| i=="*"){
                int s= st.top();
                st.pop();
                if (i=="+"){
                    s+= st.top();
                    st.pop();
                    st.push(s);
                }
                else if(i=="-"){
                    int s2= st.top();
                st.pop();
                st.push(s2-s);
                }
                else if(i=="*"){
                    s*= st.top();
                st.pop();
                st.push(s);
                }
                else if(i=="/"){
                    int s2= st.top();
                st.pop();
                st.push(s2/s);
                }
                
                
            }
            else{
                st.push(stoi(i));
            }
        }return st.top();
    }
};