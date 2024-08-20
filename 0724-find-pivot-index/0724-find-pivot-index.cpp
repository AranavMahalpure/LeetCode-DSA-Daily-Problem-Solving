class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum =0;
        int leftsum=0;

        for(int i=0;i<nums.size();i++){
            totalsum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
           if(leftsum==totalsum-nums[i]){
            return i;
           }
           leftsum+=nums[i];
           totalsum-=nums[i];
        }
        return -1;
    }
};