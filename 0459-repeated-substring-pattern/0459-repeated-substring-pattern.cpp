class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int num = s.length();
        
        // Try all possible substring lengths
        for (int len = 1; len <= num / 2; len++) {
            
            // Only valid if it divides string length
            if (num % len == 0) {
                string sub = s.substr(0, len);
                string temp = "";
                
                // Repeat substring
                for (int i = 0; i < num / len; i++) {
                    temp += sub;
                }
                
                // Check if it matches original
                if (temp == s) {
                    return true;
                }
            }
        }
        
        return false;
    }
};