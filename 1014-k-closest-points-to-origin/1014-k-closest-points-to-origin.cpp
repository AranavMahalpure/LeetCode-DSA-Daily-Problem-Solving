class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
            priority_queue<pair<int,vector<int>>>maxh;
        for(int i=0;i<points.size();i++){
            int dist=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            maxh.push({dist,points[i]});
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        vector<vector<int>>ans;
        while(!maxh.empty()){
            pair<int,vector<int>>node=maxh.top();
            ans.push_back(node.second);
            maxh.pop();
        }
        return ans;
    }
};