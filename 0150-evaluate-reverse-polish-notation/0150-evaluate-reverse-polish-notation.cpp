class Solution {
public:
    int evalRPN(vector<string>& token) {
        stack<int>st;
        int n=token.size();
        int i=0;
        int ans=0;
        while(i<n){
            if(token[i]=="*" || token[i]=="+"  || token[i]=="-" || token[i]=="/"){
               int a =st.top();
               st.pop();
               int b= st.top();
               st.pop();
            if (token[i] == "*") ans = a * b;
            else if (token[i] == "+") ans = a + b;
            else if (token[i] == "-") ans = b-a;
            else if (token[i] == "/") ans = b/a;
               st.push(ans);
               i++;
            }
            else{
                st.push(stoi(token[i]));
                i++;
            }
        }
        return st.top();
    }
};