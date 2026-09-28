class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        stack<char> st;
        int count=0;
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(s[i]);
                count+=1;
            }
            mx=max(count,mx);

            if(s[i]==')'){
                st.pop();
                count-=1;
            }
        }
        return mx;
    }
};