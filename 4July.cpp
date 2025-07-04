class Solution {
public:
    int minimumSum(int n, int k) {
         unordered_set<int> chosen;
        int sum = 0, num = 1;

        while (chosen.size() < n) {
            if (chosen.find(k - num) == chosen.end()) {
                chosen.insert(num);
                sum += num;
            }
            num++;
        }

        return sum;
    }
};