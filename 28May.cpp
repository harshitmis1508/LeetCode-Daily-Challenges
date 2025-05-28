// #include <numeric>  // for std::gcd try this again later
class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {
        if (target > x + y) return false;
        if (target == 0) return true;
        int g = std::gcd(x, y);
        return target % g == 0;
    }
};
