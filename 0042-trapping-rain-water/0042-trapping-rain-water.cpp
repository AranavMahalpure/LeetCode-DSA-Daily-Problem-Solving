class Solution {
public:
    int trap(vector<int>& height) 
    {    int n = height.size();
        if (n == 0) return 0;
        
        vector<int> prefixmax(n, 0);
        vector<int> suffixmax(n, 0);
        
        prefixmax[0] = height[0];
        for(int i = 1; i < n; i++){
            prefixmax[i] = max(prefixmax[i - 1], height[i]);
        }
        
        suffixmax[n - 1] = height[n - 1];
        for(int i = n - 2; i >= 0; i--){
            suffixmax[i] = max(suffixmax[i + 1], height[i]);
        }
        
        int totalrain = 0;
        for(int i = 1; i < n - 1; i++){
            totalrain += min(prefixmax[i], suffixmax[i]) - height[i];
        }
        
        return totalrain;
    }
};