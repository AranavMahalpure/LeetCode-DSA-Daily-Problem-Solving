class Solution {
public:
    void duplicateZeros(vector<int>& nums) {
       int idx = -1;
        int n = nums.size();
        for(int i=0;i<n;i++)
            if(nums[i] != 0) idx = i;
        if(idx==-1) return;

        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
            if(!nums[i]) ans.push_back(0);
            nums[i] = ans[i];
        } 
    }
};