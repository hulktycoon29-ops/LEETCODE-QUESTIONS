class Solution {
public:
    bool isPalindrome(int x) {
    long long dup=x;
    long long rev_num=0;
    while(x>0){
        int digit =x%10;
        rev_num=(rev_num*10)+digit;
        x=x/10;
    }
    if(rev_num==dup) return true;
    else return false;

    }
};