class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        
        sort(reservedSeats.begin(), reservedSeats.end());

        int cnt=0;
        int m = reservedSeats.size();
        for (int i=0;i<m;) {
            int row=reservedSeats[i][0];
            bool left=true;
            bool mid=true;
            bool right=true;
            int j=i;
            while (j < m && reservedSeats[j][0] == row) {
                int seat=reservedSeats[j][1];
                if (seat>=2 && seat<=5)
                    left=false;
                if (seat>=4 && seat<=7)
                    mid=false;
                if (seat>=6 && seat<=9)
                    right=false;
                j++;
            }
            if (left&&right)
                cnt+=2;
            else if (left||mid||right)
                cnt+=1;
            i=j;
        }
        int reservedRows=0;
        for (int i=0;i<m;) {
            reservedRows++; 
            int row =reservedSeats[i][0];
            while (i<m &&reservedSeats[i][0]==row)
                i++;
        }
        cnt +=(n-reservedRows)*2;
        return cnt;
    }
};