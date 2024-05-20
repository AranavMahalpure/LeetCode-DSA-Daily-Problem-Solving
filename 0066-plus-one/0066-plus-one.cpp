class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int k = digits.size() -1;
        while(k >= 0){
            if(digits[k] == 9){
                digits[k] = 0;
                k--;
            }
            else{
                digits[k]++;
                return digits;
            }
        }
        if(k == -1){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};