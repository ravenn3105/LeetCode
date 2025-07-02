class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxHeap;
        for (auto i:nums){
            maxHeap.push(i);
        }
        int top;
        while(k--){
            top= maxHeap.top();
            maxHeap.pop();
        }
        return top;
    }
};
