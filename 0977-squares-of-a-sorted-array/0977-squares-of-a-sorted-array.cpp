class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums){
        for(int i=0 ;i <nums.size();i++){
            int new_nums=pow(nums[i],2);
            nums[i]=new_nums;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};