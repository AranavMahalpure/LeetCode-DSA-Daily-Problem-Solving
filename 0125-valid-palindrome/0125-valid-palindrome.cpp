class Solution {
public:
    bool func(int i,vector<char>& a,int n)
{
    if(i>=n/2)
    return true;
    if(a[i]==a[n-1-i])
    return func(i+1,a,n);
    return false;
}
    bool isPalindrome(string s) {
        vector<char>a;
        
        for(auto c:s)
        {
            if(isalnum(c))
            {
                a.push_back(tolower(c));
            }
        }
        int n=a.size();
        return func(0,a,n);
    }

};