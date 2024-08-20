class Solution {
public:
    int dominantIndex(vector<int>& arr) {
        int indmax=-1;
        int maxi1=-1;
        int maxi2=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>maxi1 && arr[i]>maxi2){
                maxi2=maxi1;
                maxi1=arr[i];
                indmax=i;
            }
            else if(arr[i]<maxi1 && arr[i]>maxi2){
                maxi2=arr[i];
            }
        }
        if(maxi1>=maxi2*2){
            return indmax;
        }
        return -1;
    }
};