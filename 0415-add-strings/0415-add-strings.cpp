class Solution {
public:
    string add(string s1,string s2){
        int size1=s1.size()-1;
        int size2=s2.size()-1;
        string ans;
        int sum,carry=0;
        while (size1 >= 0 || size2 >= 0 || carry) {
            sum = carry;
            if (size1 >= 0) {
                sum += (s1[size1] - '0');
                size1--;
            }
            if (size2 >= 0) {
                sum += (s2[size2] - '0');
                size2--;
            }
            carry = sum / 10;
            char c = sum % 10 + '0';
            ans += c;
        }
        reverse(ans.begin(), ans.end());
          return ans;
    }
    string addStrings(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();

        if (n > m) {
            return add(num1, num2);
        } else {
            return add(num2, num1);
        }
    }
};