class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
         // Code here
        int start=0,i=0,j=arr.size()-1;
       int first=-1;
       int mid;
       int last=-1;
       while(i<=j){
       mid= i+(j-i)/2;
       if(arr[mid]==x){
           last=mid;
           i=mid+1;
       }
       else if(arr[mid]<x){
           i=mid+1;
           
       }
       else{ j=mid-1;}
           
       }
       i=0;j=arr.size()-1;
       while(i<=j){
       mid= i+(j-i)/2;
       if(arr[mid]==x){
           first=mid;
          j=mid-1;
       }
       else if(arr[mid]<x){
           i=mid+1;
           
       }
       else{ j=mid-1;}
           
       }

      return {first,last};
    }
};