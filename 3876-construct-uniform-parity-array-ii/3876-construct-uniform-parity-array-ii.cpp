class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        int ans1=0,ans2=0;
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0){
                ans1++;
            }
            else ans2++;
        }
        if(ans1==n||ans2==n)return true;
        
        bool possible =true;
        for(int i=0;i<n;i++){
            
            if(nums1[i]%2==0){
                bool found=false;
               for(int j=0;j<i;j++){
               if(nums1[j]%2!=0){
                    found=true;
                    break;
                }
               } 
               if(!found){
                    possible =false;
                    break;
                }
            }
        }
        return possible;
        
    }
};