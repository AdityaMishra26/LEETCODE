class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,r=0,zcnt=0,zidx;
        int maxlen=0;
        while(r<nums.size()){
            if(nums[r]==1)r++;
            else if(zcnt==0){
                zcnt++;
                zidx=r;
                r++;
            }
            else {
                l=zidx+1;
                zidx=r;
                r++;
            }
            maxlen=max(maxlen,r-l-1);
        }
        return maxlen;
    }
};