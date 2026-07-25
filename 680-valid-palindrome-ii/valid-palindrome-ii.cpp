class Solution {
public:
    bool isPalindrome(const string& s, int first, int last) {
        while (first < last) {
            if (s[first] != s[last]) return false;
            first++;
            last--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int first = 0, last = s.size() - 1;
        while (first < last) {
            if (s[first] != s[last]) {
                // Try skipping either the left or right character
                return isPalindrome(s, first + 1, last) || isPalindrome(s, first, last - 1);
            }
            first++;
            last--;
        }
        return true; // already a palindrome, no deletion needed
    }
};