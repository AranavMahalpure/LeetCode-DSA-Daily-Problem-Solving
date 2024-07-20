class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int n = nums.size();
        if(n == 1 ) return nums[0];
        int ele = 0, count = 0;
        for(int i = 0;i < n ; i++){
            if( count == 0 ) {
                ele = nums[i];
                count++;
            }
            else if(nums[i] == ele ) 
                count++ ;
            else if(nums[i] != ele )
                count-- ;
        }
        return ele;
    }
};