class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(),nums1.end());
        unordered_set<int> answer;
        for(int num : nums2){
            if(s.count(num)){
                answer.insert(num);
            }
        }
        return vector<int>(answer.begin(),answer.end());
    }
};