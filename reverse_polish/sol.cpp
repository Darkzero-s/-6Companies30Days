class Solution {
public:
    
    
    int evalRPN(vector<string>& tokens) {
        
        stack<int>st;
        for(int i=0;i<tokens.size();i++)
        {if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
        {
                int sol1=st.top();
                st.pop();
                int sol2=st.top();
                st.pop();
                if(tokens[i] == "+")
                {
                    st.push(sol1+sol2);
                }
                else if(tokens[i] == "-")
                {
                    st.push(sol2-sol1);
                }
                else if(tokens[i] == "*")
                {
                    st.push(sol1*sol2);
                }
                else {
                    st.push(sol2/sol1);
                }
        }
        else{
            
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};