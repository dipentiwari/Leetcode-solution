class MyQueue {
public:
    stack<int> st;
    stack<int> helper;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(st.size()==0) st.push(x);
        else{
            while(st.size()>0){
                int n=st.top();
                st.pop();
                helper.push(n);
            }
            st.push(x);
            while(helper.size()>0){
                int n=helper.top();
                helper.pop();
                st.push(n);
            }
        }
    }
    
    int pop() {
        int x=st.top();
        st.pop();
        return x;
    }
    
    int peek() {
        int x=st.top();
        return x;

    }
    
    bool empty() {
        if(st.size()==0) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */