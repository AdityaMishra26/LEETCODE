class Solution {
public:
    string reverseParentheses(string s) {
        string res="";
        stack<char>st;
        for(int i=0;i<s.size();i++){
            string temp="";
            if(s[i]!=')'){
                st.push(s[i]);
            }    
            else{
                while(st.top()!='('){
                        temp+=st.top();
                        st.pop();
                }
                st.pop();
                for(auto x:temp)st.push(x);
                
            }
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};