class Solution {
public:
    long mySqrt(int x) {
        int i=0 ,j=x;
        long ans=0;
        long long mid;
        while(i<=j){
            mid=i+(j-i)/2;
            if(mid*mid==x)
            return mid;
            else if (mid*mid<x){
                ans=mid;
                i=mid+1;
            }
            else{
                j=mid-1;
            }

            }
            return ans;
    }
};