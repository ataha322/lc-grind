#include <stack>

class MinStack {
private:
    std::stack<std::pair<int,int>> myStack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        myStack.push({val, myStack.empty() ? val : std::min(val, myStack.top().second)});
    }
    
    void pop() {
        myStack.pop();
    }
    
    int top() {
        return myStack.top().first;
    }
    
    int getMin() {
        return myStack.top().second;
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