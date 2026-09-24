class Solution {
public:
    int digitsSum(int number){
        int ld,sum=0;
        while(number>0){
            ld=number%10;
            sum+=ld;
            number/=10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++ ){
            if(digitsSum(nums[i])==i)return i;
        }
        return -1;
    }
};