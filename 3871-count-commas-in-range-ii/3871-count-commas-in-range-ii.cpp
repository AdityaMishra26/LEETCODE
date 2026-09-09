class Solution {
public:

    long long countCommas(long long n) {
        
        long long x=1000;
        long long ans=0;
        long long i=1;
       while(x<=n){
        long long temp=min(n,x*1000-1);
        // if(temp-x>0)
        ans+=(temp-x+1)*i;
        // else ans+=
        x*=1000;
        i++;
       }
       return ans;
    // if(n<1000)return 0;
    // return n-999;
       
    }
};