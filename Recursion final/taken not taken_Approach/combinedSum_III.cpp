// 40. Combination Sum II
// Attempted
// Medium
// Topics
// Companies
// Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

// Each number in candidates may only be used once in the combination.

// Note: The solution set must not contain duplicate combinations.

 

void fuct(int ind,int n, int t,set<vector<int>>&ans,vector<int>current ,vector<int>v){
    if(ind==n){
        if(t==0){
            ans.insert(current);
        }
        return ;
        }
        // only taken approach is here 
        if(v[ind]<=t){
        current.push_back(v[ind]);
        fuct(ind,n,t-v[ind],ans,current,v);
        current.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> ans;
        vector<int>current;
        fuct(0,candidates.size(),target,ans,current,candidates);
        vector<vector<int>> ans1(ans.begin(), ans.end());
        return ans1;
    }