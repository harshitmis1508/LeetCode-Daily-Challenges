class Solution {
public:
    bool isPerfectSquare(int num) {
        int sq = sqrt(num);
        for(int i=0;i<=num;i++)
        {
            if(sq*sq==num) return true;
            else{
                return false;
            }
        }
        return false;
    }
};