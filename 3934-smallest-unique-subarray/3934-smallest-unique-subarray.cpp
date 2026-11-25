class Solution {
public:
    int smallestUniqueSubarray(vector<int>& nums) {
       int n=nums.size();
        auto x=[&](int L){
            unordered_map<long long,int>cnt;
            long long h=0,base=131,mod=1e9+7,pw=1;
            for(int i=0;i<L;i++){
                h=(h*base+nums[i])%mod;
                if(i)pw=pw*base%mod;
            }
            cnt[h]++;
            for(int i=L;i<n;i++){
                h=(h-nums[i-L]*pw%mod+mod)%mod;
                h=(h*base+nums[i])%mod;
                cnt[h]++;
            }
            for(auto&[k,v]:cnt)if(v==1)return true;
            return false;
        };
        int s=1,e=n,ans=n;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(x(mid)){
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
};