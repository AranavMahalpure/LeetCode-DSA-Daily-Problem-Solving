class Solution {
public:
   bool lemonadeChange(vector<int>& bills) {
    int f = 0, t = 0; // `f` for $5 bills, `t` for $10 bills
    for (int i = 0; i < bills.size(); i++) {
        if (bills[i] == 5) {
            f++; // Received $5, no change needed
        } else if (bills[i] == 10) {
            if (f > 0) {
                f--; // Give one $5 as change
                t++; // Add one $10 to the count
            } else {
                return false; // No $5 bill to give as change
            }
        } else { // When the customer pays with a $20 bill
            if (f > 0 && t > 0) { // Prefer to give one $10 and one $5 as change
                t--;
                f--;
            } else if (f >= 3) { // Otherwise, give three $5 bills
                f -= 3;
            } else {
                return false; // Not enough change to give
            }
        }
    }
    return true; // Successfully provided change to all customers
}

};