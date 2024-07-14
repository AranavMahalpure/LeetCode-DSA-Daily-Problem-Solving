class Solution {
public:
    int search(vector<int>& arr, int x) {
        int i=0;
         int n= arr.size();
         int j= n-1;
         int index=-1;
         while(i<=j){
             int mid =(i+j)/2;
             if(arr[mid]==x){
                  index=mid;
                  break;
             }
             else if(arr[mid]<x){
                 i=mid+1;
                 
             }
             else{
                 j=mid-1;
             }
         }
         return index;
    }
};