class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length()-1;
        int count=0;
        while(n>0){
            if(!isalnum(s[n])){
            n--;
            }else{
                break;
            }
        
        
        }
        
        for(int i=n;i>=0;i--){
            if(s[i]==' '){
                break;
            }
            count++;
            
        }
        return count;
    }
};