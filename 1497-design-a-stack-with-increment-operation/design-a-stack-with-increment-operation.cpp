class CustomStack {
public:
vector<int> v;
int maxSize;
    CustomStack(int maxSize) {
        this->maxSize=maxSize;
    }
    
    void push(int x) {
        if( v.size()< maxSize){
            v.push_back(x);
        }
    }
    
    int pop() {
        if( v.empty()){ return -1;}
        int i= v.back();
       v.pop_back(); 
       return i;
    }
    
    void increment(int k, int val) {
        for (int i=0; i<v.size(); i++){
            if (i<k){
                v[i]+= val;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */