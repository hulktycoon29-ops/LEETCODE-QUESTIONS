class Solution {
public:
    int strStr(string haystack, string needle){
        if(haystack.length() < needle.length()) return -1;
        int n=haystack.length();
        int m=needle.length();
        int cnt=0;
        for(int i=0 ;i<n-m+1;i++){
            for(int j=0;j<m;j++){
                if (haystack[i+j]==needle[j]) cnt++;
            }
            if(cnt==m) return i;
            else cnt=0;
        }
        return -1;
    }
};