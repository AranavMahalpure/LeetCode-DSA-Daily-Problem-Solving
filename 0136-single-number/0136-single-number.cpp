class Solution {
public:
    int singleNumber(vector<int>& nums) {
         unordered_map<int,int> a;
         int Xo=0;
	   for(auto x: nums)
		     Xo=Xo^x;
	   return Xo;
    }
};