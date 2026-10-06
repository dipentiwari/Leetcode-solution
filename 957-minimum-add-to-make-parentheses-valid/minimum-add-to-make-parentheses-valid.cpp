class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        int count=0;
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]=='(') st.push(s[i]);
            else if(s[i]==')'){
                if(!st.empty() && st.top()=='(')
                st.pop();  
                else if(st.size()==0 || st.top()!='(')
                st.push(s[i]);
            }    
        }
        if(!st.empty()){
            while(!st.empty()){
                count++;
                st.pop();
            }
        }
        return count;
    }
};