class Solution {
public:
    bool isPrime(int num){
        if(num<2)return false;
        for(int i=2;i*i<=num;i++){
            if(num%i==0)return false;
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        int r=0,ld,temp=n;
        while(temp){
            ld=temp%10;
            r=r*10+ld;
            temp/=10;
        }
        int mini=min(r,n);
        int maxi=max(r,n);
        int sum=0;
        for(int i=mini;i<=maxi;i++){
            if(isPrime(i))sum+=i;
        }
        return sum;
    }
};