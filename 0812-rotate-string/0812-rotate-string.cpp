class Solution {
public:
    string rotateclockwise(string s){
        char c=s[s.size()-1];
        int i=s.size()-2;
        while(i>=0){
            s[i+1]=s[i];
            i--;
        }
        s[0]=c;
        return s;
    }
    bool rotateString(string str1, string str2)
    {
        // Your code here
        if(str1.size()!=str2.size()){
            return 0;
        }
        string clockwise,anticlockwise;
        int j=0;
        clockwise=str1;
        while(j<str1.size()){
        clockwise=rotateclockwise(clockwise);
        if(clockwise==str2){
            return 1;
        }
        j++;
        }
        return 0;
    }
};