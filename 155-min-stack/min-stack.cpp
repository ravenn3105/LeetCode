class MinStack {
public:
    vector<int> vc;
    MinStack() {
        
    }
    
    void push(int val) {
        vc.push_back(val);
    }
    
    void pop() {
        vc.pop_back();
    }
    
    int top() {
        return vc.back();
    }
    
    int getMin() {
        int mn=INT_MAX;
        for (auto i:vc){
            if (i<mn){
                mn=i;
            }
        }
        return mn;
    }
};
