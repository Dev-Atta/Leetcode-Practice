class Solution {
public:
    string reverseVowels(string s) {
        int left = 0, right = s.size() - 1;
        string vowels = "aeiouAEIOU";

        while (left < right) {
            // move left forward until it lands on a vowel
            while (left < right && vowels.find(s[left]) == string::npos) {
                left++;
            }
            // move right backward until it lands on a vowel
            while (left < right && vowels.find(s[right]) == string::npos) {
                right--;
            }
            // swap the two vowels found
            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};