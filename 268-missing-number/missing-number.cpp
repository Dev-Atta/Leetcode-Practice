class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end()); // insert all elements

        int n = nums.size();

        for (int i = 0; i <= n; i++) {
            if (seen.find(i) == seen.end()) {
                return i; // this number is missing
            }
        }

        return -1; // unreachable, given constraints guarantee exactly one missing number
    }
};