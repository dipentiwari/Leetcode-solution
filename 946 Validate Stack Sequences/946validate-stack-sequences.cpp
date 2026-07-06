class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int n=pushed.size();
        int a=0;
        for(int i=0;i<n;i++){
            st.push(pushed[i]);
            while(!st.empty() && st.top()==popped[a]){
            st.pop();
            a++;
            }
        }
     return st.empty();
}
};