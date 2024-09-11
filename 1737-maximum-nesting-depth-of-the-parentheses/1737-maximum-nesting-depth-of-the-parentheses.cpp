class Solution {
public:
    int maxDepth(string s) {
         int cnt=0;
        int ans=0;
        for(auto x:s){
            if(x=='(') cnt++;
            else if(x==')') cnt--;
            ans=max(ans,cnt);
        }
        return ans;
    }
};