class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;

        function<void(int)> solve = [&](int index) {
            if (index == nums.size()) {
                ans.push_back(temp);
                return;
            }

            // Don't take nums[index]
            solve(index + 1);

            // Take nums[index]
            temp.push_back(nums[index]);
            solve(index + 1);
            temp.pop_back();
        };

        solve(0);

        return ans;
        
    }
};