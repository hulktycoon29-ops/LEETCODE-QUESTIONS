class Solution {
public:
    int countDigits(int num){
        int cnt=0;
        int org=num;
        while(num>0){
            int digit=num%10;
            if(org%digit==0) cnt++;
            num=num/10;
        }
        return cnt;
    }
};