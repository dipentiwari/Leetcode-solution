class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int count = 0;
        int mxcount = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(i);
            }
            else {
                st.pop();
                if (st.empty()) {
                    st.push(i);
                }
                else {
                    count = i - st.top();
                    mxcount = max(mxcount, count);
                }
            }
        }
        return mxcount;
    }
};