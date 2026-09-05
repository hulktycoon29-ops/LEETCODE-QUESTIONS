class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k){
         unordered_set<int> s;

        for (int i = 0; i < nums.size(); i++) {
            
            // If current number already exists in the window
            if (s.find(nums[i]) != s.end()) {
                return true;
            }

            s.insert(nums[i]);

            // Keep only k elements in the window
            if (s.size() > k) {
                s.erase(nums[i - k]);
            }
        }

        return false;
    }
};