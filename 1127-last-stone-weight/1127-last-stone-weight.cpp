class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(),stones.end());
        int ans=0;
        while(pq.size()>1){
            int x =pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x>=y){
             ans=x-y;
             pq.push(ans);
            }
        }
        return pq.top();
    }
};