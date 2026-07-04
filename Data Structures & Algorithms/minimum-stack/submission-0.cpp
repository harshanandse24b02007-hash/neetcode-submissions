class MinStack {
public:
stack<pair<int,int>>st;
    MinStack() {
        
    }
    
    void push(int val) {
      if(st.empty())st.push({val,val});
      else {
        int min=val<st.top().second?val:st.top().second;
        st.push({val,min});
      }  
      
    }
    
    void pop() {
      st.pop(); 
    }
    
    int top() {
        auto ans=st.top();
        return ans.first;
    }
    
    int getMin() {
      return st.top().second;  
    }
};
