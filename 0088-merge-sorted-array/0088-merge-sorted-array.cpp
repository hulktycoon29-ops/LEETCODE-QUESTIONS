class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        int i=n;
        for(int j=m;j<m+n;j++){
            nums1[j]=nums2[n-i];
            i--;
        }
        sort(nums1.begin(),nums1.end());
    }
};