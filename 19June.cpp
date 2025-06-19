class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        
        int n = nums.size();
        int ans = 1;
        sort(nums.begin(),nums.end());
        int res = nums[0];

        for(int i=0;i<n;i++){

            if(nums[i]-res > k) {
                ans++;
                res = nums[i];
            }
        }

        return ans;
    }
};