class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long n1=need1;
        long long n2=need2;
        long long  ans=0;
        long long  maxneed=max(n1,n2);
        long long  res1=(n1*cost1)+(n2*cost2);
        long long res2=maxneed*costBoth;
        long long  minneed=min(n1,n2);

        
        long long res3=0;
           res3+=minneed*costBoth;
           if(need1>need2){
            res3+=(n1-n2)*cost1;
           }
            else if(need1<need2){
            res3+=(n2-n1)*cost2;
           }
        
        
        
        return min(res1,min(res2,res3));
    }
};