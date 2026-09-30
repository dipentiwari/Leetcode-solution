class Solution {
public:
    vector<int> maxDepthAfterSplit(string s) {
        stack<char> st;
        int n=s.size();
        vector<int> v;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(s[i]);
                if(st.size()%2==1) v.push_back(0);
                else v.push_back(1);
            }
            if(s[i]==')'){
                st.pop();
                if(st.size()%2==1) v.push_back(1);
                else v.push_back(0);
            }
        }
        return v;
    }
};