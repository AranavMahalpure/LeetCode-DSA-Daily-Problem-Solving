class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int max = 0, count = 0; 
        for(int i = 0; i < arr.size()-1; i++)
        {
            if(arr[i] < arr[i+1]) max = arr[i+1];
            else {count = i; break;}
        }
        if(max == 0) return false;

        for (int j = count; j < arr.size()-1; j++)
            if(arr[j] <= arr[j+1]) return false;
        
        return true;
    }
};