class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxi= nums.size()/2;
        unordered_map<int,int>mp;

        for(auto num:nums){
           mp[num]++;
           if(mp[num]>maxi){
            return num;
           }
        }
        return -1;
    }
};