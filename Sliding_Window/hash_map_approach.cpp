 public:
    int lenOfLongSubarr(int v[],  int N, int k ) 
    { 
        // Complete the function
          unordered_map<int, int> mp;
    int sum = 0, max_len = 0;
    
    for (int i = 0; i < N; i++) {
        sum += v[i];
        
        if (sum == k) {
            max_len = i + 1;
        }
        
        if (mp.find(sum - k) != mp.end()) {
            max_len = max(max_len, i - mp[sum - k]);
        }
        
        if (mp.find(sum) == mp.end()) {
            mp[sum] = i;
        }
    }
    
    return max_len;
    } 
