// 39. Combination Sum

 void fuct(int ind,int n, int t,vector<vector<int>>&ans,vector<int>current ,vector<int>v){
    if(ind==n){
        if(t==0){
            ans.push_back(current);
        }
        return ;
        }
        if(v[ind]<=t){
        current.push_back(v[ind]);
        fuct(ind,n,t-v[ind],ans,current,v);
        current.pop_back();
        }
        fuct(ind+1,n,t,ans,current,v);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>current;
        fuct(0,candidates.size(),target,ans,current,candidates);
        return ans;
    }