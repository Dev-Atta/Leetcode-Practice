class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr; // (value, original index)
        for (int i = 0; i < nums.size(); i++)
            arr.push_back({nums[i], i}); // Making Pair of (Elment,Index)

        sort(arr.begin(), arr.end());

        int first = 0, last = arr.size() - 1;
        while (first < last) {
            int sum = arr[first].first + arr[last].first; // .first Gives Elment 
            if (sum == target) {
                return {arr[first].second, arr[last].second}; //. Second GiVes iNDEX 
            } else if (sum < target) {
                first++;
            } else {
                last--;
            }
        }
        return {}; // no solution found
    }
};