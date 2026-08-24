class Solution {
public:
    int reverse(int x){
        long long dup=x;
        long long n=x;
        if(n<0){
            n=abs(n);
        }
        long long rev_num=0;
        while(n>0){
            int digit =n%10;
            rev_num=(rev_num*10)+digit;
            n=n/10;
        }
        long long result=0;
        if(dup<0) result=(-1)*rev_num;
        else result = rev_num;
        if(result > 2147483647 || result <-2147483648) return 0;
        else return result;
    }
};