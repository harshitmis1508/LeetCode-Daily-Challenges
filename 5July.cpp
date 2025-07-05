class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        unordered_map<int,int> freq;
        for(int it: arr)
        {
            freq[it]++;
        }

        int res = -1;
        for(auto &[it,count]: freq)
        {
            if(it == count)
            {
                res = max(it,res);
            }
        }

        return res;
    }
};