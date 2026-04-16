class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int num = digits.size();
        
        // Traverse from the last digit
        for (int i = num - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;   // simple increment
                return digits; // no carry needed
            }
            digits[i] = 0; // carry over
        }
        
        // If all digits were 9
        digits.insert(digits.begin(), 1);
        return digits;
    }
};