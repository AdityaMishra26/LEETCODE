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
        for(int j=n-k-1;j>=0;j--){
            nums[j+k]=nums[j];
        }
        //temp ki value put krdo suruwat me
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }
    }
};