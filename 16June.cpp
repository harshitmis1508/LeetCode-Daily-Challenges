class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int n = nums.size();
        int diff = 0;
        int maxi = 0;
        for(int i=0;i<n;i++){
            for(int j=1+i;j<n;j++){

                diff = nums[j] - nums[i];
                maxi = max(maxi,diff);
            }
        }

        if(maxi) return maxi;
        else{
            return -1;
        }

    }
};