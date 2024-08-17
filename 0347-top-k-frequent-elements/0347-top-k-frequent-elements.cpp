class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>> p(mp.begin(),mp.end());
        sort(p.begin(),p.end(), [](pair<int,int> a, pair<int,int> b)
        {
            return a.second > b.second;
        });
        for(int i=0;i<k;i++)
        {
            v.push_back(p[i].first);
        }
        return v;
    }
};