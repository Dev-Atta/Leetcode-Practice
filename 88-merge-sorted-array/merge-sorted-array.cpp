class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // This is where the next (largest remaining) value will be placed.
        int last = m + n - 1;

        // Merge from the back forward.
        // We compare the largest unmerged elements of nums1 and nums2, and place the bigger one at the 'last' position.
        // This avoids overwriting nums1 elements we haven't processed yet,
        // since we're only ever writing into "already consumed" or "placeholder zero" slots.
        while (m > 0 && n > 0) {
            if (nums1[m - 1] > nums2[n - 1]) {
                // Largest remaining value is in nums1 -> place it, move nums1 pointer back
                nums1[last] = nums1[m - 1];
                m -= 1;
            } else {
                // Largest remaining value is in nums2 (or equal) -> place it, move nums2 pointer back
                nums1[last] = nums2[n - 1];
                n -= 1;
            }
            // Move to the next slot (one position to the left)
            last -= 1;
        }

        // If nums2 still has leftover elements, copy them into nums1.
        // (If nums1 has leftovers instead, no action is needed 
        //  those elements are already in their correct sorted positions.)
        while (n > 0) {
            nums1[last] = nums2[n - 1];
            n -= 1;
            last -= 1;
        }
    }
};