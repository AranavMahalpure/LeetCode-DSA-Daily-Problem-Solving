class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         int n = nums.size();
        vector<int>ans(n,0);
        int PositiveIndex=0;
        int NegativeIndex=1;
        for (int i=0;i<n;i++) {
            if (nums[i]<0) {
                ans[NegativeIndex]=nums[i];
                NegativeIndex+=2;

            }
            else {
                ans[PositiveIndex]=nums[i];
                PositiveIndex+=2;
            }

        }
        return ans;
    }
};