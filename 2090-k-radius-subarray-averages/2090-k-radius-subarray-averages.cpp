class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
      vector<int>arr(n,-1);
      if(k==0)return nums;
      long long suml=0,sumr=0;
       if (2 * k + 1 > n)
            return arr;
      for(int i=0;i<k;i++){
        suml+=nums[i];
      }
      for(int i=k+1;i<=2*k;i++){
        sumr+=nums[i];
      } 
      for(int i=k;i+k<n;i++){
        arr[i]=(nums[i]+suml+sumr)/(2*k+1);
        suml=suml-nums[i-k]+nums[i];
        if(i+k+1<n)
        sumr=sumr-nums[i+1]+nums[i+k+1];
      }
    return arr;
    }
};