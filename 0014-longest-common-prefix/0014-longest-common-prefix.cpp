class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         int n=strs.size();
        int mini=strs[0].size();
        for(int i=0;i<n-1;i++)
        {
            int count =0;
            string string1=strs[i];
            string string2=strs[i+1];
            for(int j=0;j<min(string1.size(),string2.size());j++)
            {
                if(string1[j]==string2[j])
                    count++;
                else 
                    break;
            }
            mini=min(mini,count);
        }
        if(mini==0)
            return "";
        else 
            return (strs[0].substr(0,mini));
    }
};