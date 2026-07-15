class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet;
        for (int i = 0; i < jewels.size(); i++) {
            jewelSet.insert(jewels[i]);
        }

        int count = 0;
        for (int i = 0; i < stones.size(); i++) {
            if (jewelSet.count(stones[i])) {
                count++;
            }
        }

        return count;
    }
};