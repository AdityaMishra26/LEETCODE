class Solution {
public:
    int divi(int x){
        int ld=0,pro=1;
        while(x){
            ld=x%10;
            pro*=ld;
            x/=10;
        }
        return pro;
    }
    int smallestNumber(int n, int t) {
        int p;
        for(int i=n;i<=100;i++){
            p=divi(i);
            if(p%t==0){return i;
            break;}
        }
        return -1;
    }
};