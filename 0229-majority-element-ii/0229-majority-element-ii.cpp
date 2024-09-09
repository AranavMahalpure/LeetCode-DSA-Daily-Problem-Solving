class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         int maxi= nums.size()/3;
        unordered_map<int,int>mp;
        set<int> ans;
        for(auto num:nums){
           mp[num]++;
           if(mp[num]>maxi){
            ans.insert(num);
           }
        }
        vector<int>m(ans.begin(),ans.end());
        return m;
    }
};