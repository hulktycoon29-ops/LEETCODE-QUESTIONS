class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pointer=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[pointer]){
                nums[pointer+1]=nums[i];
                pointer++;
            }
        }
        return pointer+1;
    }
};