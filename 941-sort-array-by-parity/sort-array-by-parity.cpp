class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;

        while (i < j) {
            if (nums[i] % 2 == 0) {
                // Left side already even, move inward
                i++;
            } else if (nums[j] % 2 == 1) {
                // Right side already odd, move inward
                j--;
            } else {
                // nums[i] is odd and nums[j] is even -> swap them into place
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        }

        return nums; 
    }
};