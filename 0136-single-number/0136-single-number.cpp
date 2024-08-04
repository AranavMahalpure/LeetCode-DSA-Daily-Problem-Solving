class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
         int Xo=0;
	   for(auto x: nums)
		     Xo=Xo^x;
	   return Xo;
    }
};