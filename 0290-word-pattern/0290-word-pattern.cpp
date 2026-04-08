class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> m1;
        unordered_map<string, char> m2;
        
        stringstream ss(s);
        string word;
        int i = 0;
        
        while (ss >> word) {
            if (i >= pattern.size()) return false;
            
            char ch = pattern[i];
            
            // char -> word mapping
            if (m1.count(ch)) {
                if (m1[ch] != word)
                    return false;
            } else {
                m1[ch] = word;
            }
            
            // word -> char mapping
            if (m2.count(word)) {
                if (m2[word] != ch)
                    return false;
            } else {
                m2[word] = ch;
            }
            
            i++;
        }
        
        return i == pattern.size();
    }
};