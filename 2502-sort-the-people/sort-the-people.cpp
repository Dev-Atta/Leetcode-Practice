class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();

        // pair each index with its height, so sorting by height
        // still lets us know which name it belongs to
        vector<pair<int,int>> v; // {height, original index}
        for (int i = 0; i < n; i++) {
            v.push_back({heights[i], i});
        }

        // sort descending by height (pair compares by .first automatically)
        sort(v.rbegin(), v.rend());
        // e.g. heights = [180,165,170] -> pairs {180,0},{165,1},{170,2}
        // after sort: {180,0},{170,2},{165,1}

        vector<string> result;
        for (auto& p : v) {
            result.push_back(names[p.second]); // p.second = original index
        }

        return result;
    }
};