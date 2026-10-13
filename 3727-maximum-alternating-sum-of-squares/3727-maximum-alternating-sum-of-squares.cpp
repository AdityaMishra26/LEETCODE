class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(auto &x:nums){
            if(x<0)x*=-1;
        }
        sort(nums.begin(),nums.end());
        long long ans=0;
        int l=0,r=nums.size()-1;
        while(l<r){
            ans=ans+(nums[r]*nums[r])-(nums[l]*nums[l]);
            l++;
            r--;
        }
        if(nums.size()%2!=0){
            ans+=nums[l]*nums[l];
        }
     return ans;
    }
};