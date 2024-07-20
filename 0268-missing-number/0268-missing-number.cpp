class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int l= nums.size();
          for (int i=0;i<nums.size();i++){
   sum+=nums[i];
          }
          return (l*(l+1))/2 - sum;

    }
};