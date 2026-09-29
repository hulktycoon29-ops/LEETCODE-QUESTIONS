class Solution {
public:
    int differenceOfSum(vector<int>& nums){
        int element_sum=0;
        int digit_sum=0;
        for(int i=0;i<nums.size();i++){
            element_sum+=nums[i];
            if(nums[i]>9){
                while(nums[i]>0){
                    int digit=nums[i]%10;
                    digit_sum+=digit;
                    nums[i]=nums[i]/10;
                }
            }
            else{
                digit_sum+=nums[i];
            }
        }
        return element_sum -digit_sum;
    }
};