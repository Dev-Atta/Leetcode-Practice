class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int odd = 1; // next candidate odd index to check

        // Walk every even index looking for misplaced odd values
        for (int even = 0; even < n; even += 2) {
            if (nums[even] % 2 == 1) {
                // nums[even] is odd but sits at an even index — find
                // an odd index currently holding an even value to swap with
                while (nums[odd] % 2 == 1) {
                    odd += 2;
                }
                swap(nums[even], nums[odd]);
            }
        }

        return nums;
    }
};