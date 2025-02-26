class MyStack {
private:
   deque<int> ans;
public:
    MyStack() {
        ans = deque<int>();
    }
    
    void push(int x) {
        ans.push_back(x);
    }
    
    int pop() {
        int topele = ans.back();
        ans.pop_back();
        return topele;
    }
    
    int top() {
        return ans.back();
    }
    
    bool empty() {
        return ans.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */