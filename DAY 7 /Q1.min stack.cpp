class MinStack {
    stack<int>s,st;
public:
    
    MinStack() {
        
    }
    
    void push(int value) {
        s.push(value);
        if(st.empty() || value<=st.top()){
            st.push(value);
        }
    }
    
    void pop() {
        if(s.top() == st.top()){
            st.pop();
        }  
        s.pop();
        
    }
    
    int top() { 
        return s.empty()? -1: s.top();
        
    }
    
    int getMin() {
        return st.empty() ? -1: st.top();
    }
};
