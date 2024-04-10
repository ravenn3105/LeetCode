class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
       queue<int> q;
       
       int i,n=deck.size();
       vector<int>ans(n,0);
       for (i=0; i<n; i++){
        q.push(i);
       } 
       i=0;
       sort(deck.begin(), deck.end());
        while(!q.empty() && i<n){
            ans[q.front()]= deck[i];
            q.pop();
            q.push(q.front());
            q.pop();
            i++;
        }
        return ans;
    }
};