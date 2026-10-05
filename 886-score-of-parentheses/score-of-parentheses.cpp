class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.size();
        stack<char> st;
        int val = 0;
        int mul = 1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(s[i]);
                mul *= 2;
            }
            else if (s[i] == ')' && !st.empty()) {
                st.pop();
                if (s[i - 1] == '(') {
                    val += mul / 2;
                }
                mul /= 2;
            }
        }
        return val;
    }
};