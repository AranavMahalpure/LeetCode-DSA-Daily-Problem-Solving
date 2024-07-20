class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int n =nums.size();
         unordered_map<int,int> hmap;
         for( int i=0;i<n;i++){
            hmap[nums[i]]++;
         }
         for(auto it:hmap){
            if(it.second<=1){
                return it.first;
            }
         }
         return -1;

    }
};