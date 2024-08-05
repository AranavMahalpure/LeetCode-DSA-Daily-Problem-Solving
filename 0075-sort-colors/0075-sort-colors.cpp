class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,two=0;
        int m=0;
        while(m<nums.size())
        {
          if(nums[m]==0){
            zero++;
          }
          if(nums[m]==1){
            one++;
          }
          if(nums[m]==2){
            two++;
          }
          m++;
        }
        int i=0;
            while(zero){
                nums[i]=0;
                i++;
                zero--;
            }
            while(one){
                nums[i]=1;
                i++;
                one--;
            }
            while(two){
                nums[i]=2;
                i++;
                two--;
            }
    }
};