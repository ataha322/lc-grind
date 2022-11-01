#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> stack1;
    stack<int> stack2;
    MyQueue() {
        
    }
    
    void push(int x) {
        stack1.push(x);
    }
    
    int pop() {
        if (stack2.empty()) {
            while(!stack1.empty()) {
                int tmp = stack1.top(); stack1.pop();
                stack2.push(tmp);
            }
        }
        
        int ret = stack2.top(); stack2.pop();
        return ret;
    }
    
    int peek() {
        if (stack2.empty()) {
            while(!stack1.empty()) {
                int tmp = stack1.top(); stack1.pop();
                stack2.push(tmp);
            }
        }
        
        return stack2.top();
    }
    
    bool empty() {
        if (stack1.empty() && stack2.empty()) {
            return true;
        }
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
