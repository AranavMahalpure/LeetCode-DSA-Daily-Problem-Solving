class Solution {
public:
    string frequencySort(string s) {
     unordered_map<char ,int> mp ;
        for(auto  i :s)
        mp[i]++;
        vector < pair<int,char>> v;
        for(auto i : mp)
        {
            v.push_back({i.second,i.first});
        }
        sort(v.begin(), v.end());
        string k="";
        for(auto i:v)
        {
            while(i.first != 0)
            {
                k += i.second;
                i.first--;
            }
        }
        reverse(k.begin() , k.end());
        return k;    
    }
};