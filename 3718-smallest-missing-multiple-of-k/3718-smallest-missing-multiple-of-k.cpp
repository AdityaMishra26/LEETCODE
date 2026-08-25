class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end());
        
        int mul=k;
        int i=1;
        while(mul<=maxi){
            auto  it=find(nums.begin(),nums.end(),mul);
            if(it!=nums.end()){
                mul=k*i;
                i++;
            }
            else{
                return mul;
            }
        }
        return mul;
    }
};