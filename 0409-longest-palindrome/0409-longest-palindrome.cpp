class Solution {
public:
    int longestPalindrome(string st) {
        int freq[128] = {0};
        
        // count frequency
        for (int i = 0; i < st.length(); i++) {
            freq[st[i]]++;
        }
        
        int length = 0;
        
        for (int i = 0; i < 128; i++) {
            length += (freq[i] / 2) * 2; // even part le lo
        }
        
        // agar koi odd character hai to +1
        if (length < st.length()) {
            length += 1;
        }
        
        return length;
    }
};