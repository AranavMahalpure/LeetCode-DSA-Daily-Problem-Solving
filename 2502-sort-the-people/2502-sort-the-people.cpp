class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int m= names.size();
        int n=heights.size();
        unordered_map<int,string>mp;
        if(m!=n){
             return {"0"};
        }
        for(int i=0;i<n;i++){
            mp[heights[i]]=names[i];
        }
        sort(heights.rbegin(),heights.rend());
        for(int i=0;i<n;i++){
            names[i]=mp[heights[i]];
        }
        return names;
    }
};