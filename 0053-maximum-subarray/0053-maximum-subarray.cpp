class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int sum=0; 
       int n=nums.size();
       int r=0,maxsum=INT_MIN;
       while(r<n){
        if(sum>=0){sum+=nums[r];
            r++;
            maxsum=max(maxsum,sum);
        }
        else if(sum<0){
            sum=0;
        }
       }
       return maxsum;
    }
};