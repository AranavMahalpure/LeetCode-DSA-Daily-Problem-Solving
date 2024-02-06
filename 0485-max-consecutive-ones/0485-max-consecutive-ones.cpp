class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcnt= 0;
        int count =0;
        int i;
        for (i=0;i<nums.size();i++){ 
            while(nums[i]==1){
                  maxcnt++;
                 i++;
                if(i==nums.size()){
                    return max(maxcnt++,count);
                    
                }
             }
            if(i<nums.size()){
             count=max(maxcnt,count);
             maxcnt=0;
                }
             }
       
        return max(maxcnt,count);
    }
};