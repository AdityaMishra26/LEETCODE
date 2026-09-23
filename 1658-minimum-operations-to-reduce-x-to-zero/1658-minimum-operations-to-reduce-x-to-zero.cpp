class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int l=0,r=0;
        int sum=0;
        for(auto x:nums){
            sum+=x;
        }
        int newsum=sum-x;
        if(newsum<0)return -1;
        int comsum=0,maxlen=-1;
         while(r<nums.size()){
          
                comsum+=nums[r];
                r++;
        
       
                while(comsum>newsum){
                    comsum-=nums[l];
                    l++;
                }
            // 
            if(comsum==newsum){
                maxlen=max(maxlen,r-l);
            }
         }
         if(maxlen==-1)return -1;
         return nums.size()-maxlen;
    }
};