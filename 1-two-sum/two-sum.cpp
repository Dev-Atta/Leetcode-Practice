class Solution {
public:
    // Function takes the array 'nums' and the 'target' sum, returns indices of the pair
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> seen; // Hashmap to store {number : its index} as we iterate

        // Loop through the array exactly once, index i from 0 to nums.size()-1
        for (int i = 0; i < nums.size(); i++) {

            int complement = target - nums[i]; // The number needed to pair with nums[i] to reach target

            // Check if complement already exists as a key in the hashmap
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i}; // Found it! Return earlier index + current index
            }

            seen[nums[i]] = i; // No match yet, so store current number and its index for future checks
        }

        return {}; // Fallback return (won't actually trigger, since problem guarantees one solution)
    }
};