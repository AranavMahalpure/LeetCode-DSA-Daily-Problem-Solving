class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>hmap;
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            hmap[nums[i]]++;
        }
        for(auto it:hmap){
            if(it.second>n/3){
                ans.push_back(it.first);
            }
        }
     return ans;
    }
};   