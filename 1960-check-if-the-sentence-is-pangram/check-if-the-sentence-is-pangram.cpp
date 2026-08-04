class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> letters(sentence.begin(), sentence.end());
        return letters.size() == 26;
    }
};