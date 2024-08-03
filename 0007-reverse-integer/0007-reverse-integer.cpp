class Solution {
public:
    int reverse(int x) {int rem;
      int ans=0;
        while(x){
         rem=x%10;
         x=x/10;
         if(ans>INT_MAX/10 || ans<INT_MIN/10){
         return 0;
         }
         ans=ans*10+rem;
        }
        return ans;
    }
};