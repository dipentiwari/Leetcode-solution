class MinStack {
public:
    stack<long long> st; 
    long long mn;

    MinStack() {
    mn=LLONG_MIN;    
    }
    
    void push(int val) {
        long long x=(long long)val;
        if(st.size()==0) {
        st.push(x);
        mn=x;
        }
        else if(x>=mn)
        st.push(x);
        else{
            st.push(2*x-mn);
            mn=x;
        }
    }
    
    void pop() {
        if(st.top()< mn){
            long long oldmn=2*mn-st.top();
            mn=oldmn;
        }
        st.pop();
    }
    
    int top() {
       if(st.top()<mn) return (int)(mn);
       else return (int)(st.top());        
    }
    
    int getMin() {
        return (int)(mn);
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */