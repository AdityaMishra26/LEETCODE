class Solution {
public:
    int minMoves(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int mini=nums[0];
       int cnt=0;
       for(int i=1;i<nums.size();i++){
          cnt+=nums[i]-mini;
       }
       return cnt;
    }
};