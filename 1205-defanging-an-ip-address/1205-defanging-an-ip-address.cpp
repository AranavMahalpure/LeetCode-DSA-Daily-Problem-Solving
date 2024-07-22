class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.size();
        string ans;
        int i=0;
        while(i<n){
            if(address[i]== '.'){
                ans=ans+"[.]";

            }
            else{
                ans=ans+address[i];
            }
            i++;
        }
        return ans;
    }
};