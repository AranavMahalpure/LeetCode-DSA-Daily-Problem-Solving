class Solution {
public:
    string reverseWords(string s) {
          int n=s.length();
      string ans;
      string result;
      char c;
      int i=s.size()-1;
      while(i>=0){
        if(s[i]!=' '){c=s[i];
        ans+=c;
        }

        if(s[i]==' '){
            reverse(ans.begin(),ans.end());
            result+=ans+" ";
            ans="";
    
        }
        if(i==0){
            reverse(ans.begin(),ans.end());
            result+=ans+" ";
            break;
        }
         i--;
      }
      while (!result.empty() && result.back() == ' ') {
            result.pop_back();
        }
        while (!result.empty() && result.front() == ' ') {
            result.erase(result.begin());
        }
        
     // Remove extra spaces from the result
        int j = 0;
        while (result[j] == ' ') {
            j++;
        }
        result = result.substr(j);

        j = result.size() - 1;
        while (result[j] == ' ') {
            j--;
        }
        result = result.substr(0, j + 1);

        // Remove extra spaces between words
        string finalResult;
        bool inSpace = false;
        for (char ch : result) {
            if (ch != ' ') {
                finalResult += ch;
                inSpace = false;
            } else if (!inSpace) {
                finalResult += ' ';
                inSpace = true;
            }
        }

        return finalResult;
    }
};