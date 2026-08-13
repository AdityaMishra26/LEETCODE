class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int>temp(k,0);
        //store last k elements in temp   
        for(int i=0;i<k;i++){
            temp[i]=nums[n-k+i];
        }
        //shift remaining to right
        for(int j=n-1;j>=k;j--){
            nums[j]=nums[j-k];
        }
        //temp ki value put krdo suruwat me
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }
    }
};