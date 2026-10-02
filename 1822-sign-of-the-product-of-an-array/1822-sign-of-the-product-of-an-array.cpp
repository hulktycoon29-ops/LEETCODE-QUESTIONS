class Solution {
public:
    int signFunc(int x ,int y){
        if(x%2==0 && y==0)return 1;
        else if(x%2!=0 && y==0 ) return -1;
        else if(y!=0) return 0;
        return 0;
    } 
    int arraySign(vector<int>& nums) {
        int sign =0;
        int zero=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]<0)sign++;
           if(nums[i]==0) zero++;
        }
        return signFunc(sign,zero);
    }
};