class Solution {
public:
    bool containsDuplicate(vector<int>& nums){
        map<int ,int > mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]+=1;
        }
        int flag=0;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]>=2){
                flag=1;
                break;
            }
        }
        if(flag==1) return true;
        else return false;
    }
};