class RandomizedSet {
public:
vector<int> setv;
    RandomizedSet() {

    }
    
    bool insert(int val) {
        if (find(setv.begin(), setv.end(), val)==setv.end()){
            setv.push_back(val);
            return true;
        }return false;
    }
    
    bool remove(int val) {
        auto i= find(setv.begin(), setv.end(), val);
        if (i!= setv.end()){
            setv.erase(i);
            return true;
        }
    return false;
    }
    
    int getRandom() {
        int n= rand()%setv.size();
        return setv[n];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */