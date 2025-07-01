class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;
        for (auto i:stones){
            maxHeap.push(i);
        }
        while (maxHeap.size()>1){
            int s1= maxHeap.top();
            maxHeap.pop();
            int s2= maxHeap.top();
            maxHeap.pop();
            if (s1!= s2){
                maxHeap.push(s1-s2);
            }
            
        }
        maxHeap.push(0);
        return maxHeap.top();
    }
};
