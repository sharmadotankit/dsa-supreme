// LEETCODE 155: MINSTACK
//Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
class MinStack {
public:
    vector<pair<int,int>> st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
			pair<int,int> p ;
			p.first = val;
			p.second = val;
			st.push_back(p);
		}else{
			pair<int,int> p; 
			p.first =val;
			pair<int,int> puranaMin = st.back();
			p.second = min(puranaMin.first,val);
			st.push_back(p);
		}
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        pair<int,int> rightMostPair = st.back();
		return rightMostPair.first;  
    }
    
    int getMin() {
        pair<int,int> rightMostPair = st.back();
		return rightMostPair.second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */