class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> list;

        vector<pair<int,int>> turn;

        vector<int> sol;

        for(const auto& i : nums) list[i]++;

        for(const auto& pair : list)  turn.emplace_back(pair.second, pair.first);

        sort(turn.begin(), turn.end());

        for(auto it = turn.rbegin(); it != turn.rend(); ++it) 
        {
            sol.push_back(it->second);

            k--;

            if(k == 0) break;
        }

        return sol;

        
    }
};