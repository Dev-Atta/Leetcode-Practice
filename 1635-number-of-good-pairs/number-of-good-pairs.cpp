class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> count; //count will store number → how many times we've seen it so far
        int pairs = 0;

        for (int num : nums) {
            pairs += count[num];  // count[num] gives how many times num has appeared before this point in the array.
            count[num]++;
        }

        return pairs;
    }
};


//count[num] on an unordered_map auto-creates the entry with value 0 if num isn't in the map yet — so this never crashes, it just returns 0 for a number never seen before.

//count[num] answers the question "how many nums have I already passed through so far?"