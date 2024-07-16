class Solution {
public:
    int searchInsert(vector<int>& arr, int x) {
         int i=0;
         int j=arr.size()-1;
       int index=arr.size();
       int mid;
       while(i<=j){
       mid= i+(j-i)/2;
       if(arr[mid]==x){
           index=mid;
           break;
       }
       else if(arr[mid]<x){
           i=mid+1;

           
       }
       else{ 
        index=mid;
        j=mid-1;
        }
           
       }
       return index;
    }
};