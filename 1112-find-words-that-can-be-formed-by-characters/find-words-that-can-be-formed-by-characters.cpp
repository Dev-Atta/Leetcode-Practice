class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        multiset<char> charSet(chars.begin(), chars.end());
        int totalLength = 0;
        
        for (string& word : words) {
            multiset<char> temp = charSet;  // fresh copy for each word
            bool isGood = true;
            
            for (char c : word) {
                auto it = temp.find(c);
                if (it == temp.end()) {
                    isGood = false;
                    break;
                }
                temp.erase(it);  // consume this character (erase only ONE occurrence)
            }
            
            if (isGood) {
                totalLength += word.length();
            }
        }
        
        return totalLength;
    }
};