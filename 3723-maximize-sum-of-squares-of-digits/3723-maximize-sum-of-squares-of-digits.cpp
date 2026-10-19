class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string res="";
        if(sum>9*num)return "";
        while(sum>0 && num>0){
            if(sum<9 && num>0){
                res+=char('0'+sum);
                sum=0;
                num--;
            }
            else if(sum>=9 && num>0){
                res+='9';
                num--;
                sum-=9;
            }
        }
        while(num>0){
                res+='0';
                num--;
        }
return res;
    }
};