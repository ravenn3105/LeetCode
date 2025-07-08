class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> c(26, 0);
        for (auto i:tasks){
            c[i-'A']++;
        }
        priority_queue<int> maxHeap;
        for (auto i:c){
            if (i>0){
                maxHeap.push(i);
            }
        }
        int time=0;
        queue<pair<int,int>> q;
        while(!maxHeap.empty() || !q.empty()){
            time++;
            if (maxHeap.empty()){
                time=q.front().second;

            }
            else{
                int m= maxHeap.top()-1;
                maxHeap.pop();
                if(m>0){
                    q.push({m,time+n});
                }
            }
            if (!q.empty() && q.front().second==time){
                maxHeap.push(q.front().first);
                q.pop();
            }
        }
        return time;
    }
};
