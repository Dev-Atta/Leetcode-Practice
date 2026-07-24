class Solution {
public:
    bool isPalindrome(string s) {
        int first = 0;
        int last = s.size() - 1;

        while (first < last) {
            // skip non-alphanumeric from the left
            while (first < last && !isalnum(s[first])) first++;  // isalnum returns true if letter or digit
            // skip non-alphanumeric from the right
            while (first < last && !isalnum(s[last])) last--;

            if (tolower(s[first]) != tolower(s[last])) return false;

            first++;
            last--;
        }
        return true;
    }
};