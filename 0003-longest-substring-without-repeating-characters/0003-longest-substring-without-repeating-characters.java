class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n=s.length();
        int start=0,end=0;
        int arr[]=new int[128];

        int maxcnt=0,cnt=0;
        while(end<n)
        {
            char ch=s.charAt(end);
            if(arr[ch]==0)
            {arr[ch]++;++end;}
            else
            {
                arr[ch]=0;
                maxcnt=Math.max(maxcnt,end-start);
                while(ch!=s.charAt(start))
                {
                    arr[s.charAt(start)]=0;
                    start++;
                }
                start++;
            }
        }
        maxcnt=Math.max(maxcnt,end-start);
        return maxcnt;
    }
}