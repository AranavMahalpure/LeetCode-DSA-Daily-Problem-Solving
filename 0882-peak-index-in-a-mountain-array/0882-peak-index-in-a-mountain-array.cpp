class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=0;
        int r=arr.size()-1;
        int mid=0;
        while(i<=r){
            mid= i+(r-i)/2;
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]){
                i=mid;
            }
            else{
                r=mid;
            }
        }
        return -1;
    }
};