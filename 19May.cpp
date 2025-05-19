class Solution {
public:
    string triangleType(vector<int>& nums) {
        
        int n = nums.size();
        if(n<3 || n>3) return "none";
            int a = nums[0];
            int b = nums[1];
            int c = nums[2];
            if(a+b > c && b+c > a && a+c > b)
            {
                if(a != b && b != c && c != a) return "scalene";
                else if(a==b && b==c && c==a) return "equilateral";
                else return "isosceles";
            }
        return "none";
    }
};