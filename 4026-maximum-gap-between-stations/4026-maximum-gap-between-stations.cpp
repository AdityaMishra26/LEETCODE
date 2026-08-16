class Solution {
public:
    bool check(vector<int>& left,vector<int>& right,int gap){
        int n=left.size();
        for(int i=1;i<n;i++){
            if(right[i]-left[i-1]>=gap)
                return true;
        }
        return false;
    }

    int maximumGap(string skill,string station){
        int n=skill.size();
        int m=station.size();
        if(n==1)
            return 0;
        vector<int> left(n),right(n);
        int j=0;
        for(int i=0;i<n;i++){
            while(station[j]!=skill[i])
                j++;

            left[i]=j;
            j++;
        }
        j=m-1;
        for(int i=n-1;i>=0;i--){
            while(station[j]!=skill[i])
                j--;
            right[i]=j;
            j--;
        }
        int low=1;
        int high=m-1;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(left,right,mid)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};